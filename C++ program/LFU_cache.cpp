/*
    Design and implement a data structure for a Least Frequently Used (LFU) cache.

    Implement the LFUCache class:

    LFUCache(int capacity) Initializes the object with the capacity of the data structure.
    int get(int key) Gets the value of the key if the key exists in the cache. Otherwise, returns -1.
    void put(int key, int value) Update the value of the key if present, or inserts the key if not already present. When the cache reaches its capacity, it should invalidate and remove the least frequently used key before inserting a new item. For this problem, when there is a tie (i.e., two or more keys with the same frequency), the least recently used key would be invalidated.
    To determine the least frequently used key, a use counter is maintained for each key in the cache. The key with the smallest use counter is the least frequently used key.

    When a key is first inserted into the cache, its use counter is set to 1 (due to the put operation). The use counter for a key in the cache is incremented either a get or put operation is called on it.

    The functions get and put must each run in O(1) average time complexity.
*/


#include<bits/stdc++.h>
using namespace std;


// Doubly Linked-List-Node class with prev and next pointers
class Node {
public:
    int key, val, cnt;
    Node *next, *prev;
    Node(int _key, int _val) {
        key = _key;
        val = _val;
        cnt = 1;    // counter for maintaining the frequency of the Node
    }
};


// Doubly Linked-List class with head and tail pointers
class List {
public:
    int len;
    Node *head, *tail;

    List() {
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
        len = 0;
    }

    // adds a new Node at the front (MRU position) of a doubly-linked-list
    // (adds a new node in-between two pre-existing nodes)
    void addNode(Node *newNode) {
        Node *temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
        len++;
    }

    // deletes a Node (generally the LRU node) from a doubly-linked-list
    // (breaks the prev and next links of the node to be deleted)
    void deleteNode(Node *delNode) {
        Node *delPrev = delNode->prev;
        Node *delNext = delNode->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
        len--;
    }
};


// LFU Cache class
class LFUCache {
private:
    unordered_map<int, Node*> addrOfKey;    // hashmap for storing the - address corresponding to a key / Node containing that key
    unordered_map<int, List*> freqListMap;  // hashmap for storing the - List having Nodes corresponding to its use-frequency
    int minFreq, currSize;
    int cacheCapacity;

    /**
     *
     * Basically we are using the concept of LRUCache in this LFUCache question but with a twist
     *
     * We're creating separate Lists for each use-frequency of the Nodes,
     * and we're adding the nodes in those Lists following the LRU algorithm
     *
     * Everytime a key is being accessed (get/put), we're fetching the Node corresponding to that key
     * and the List corresponding to that Node, then we're deleting the Node from the LRU position of
     * the List, the Node is residing in and adding that same Node at the front (MRU position) of the List
     * having Nodes with use-frequency 1 greater than the use-frequency of the Node that was recently deleted.
     *
     * (list is mapped against use-frequency of the Nodes, means in a List all the nodes have
     * the same use-frequency and those Nodes are stored following the LRU mechanism)
     *
     */
    void updateFreqListMap(Node *node) {
        addrOfKey.erase(node->key);                     // delete the address of the key
        freqListMap[node->cnt]->deleteNode(node);       // delete the Node with "cnt" frequency from the corresponding List
        if (node->cnt == minFreq && freqListMap[node->cnt]->len == 0) {
            minFreq++;                                  // if the deleted node had the min-frequency, after deletion,
            // the Node with the next higher frequency will have the min-frequency
            // Intuition -- Common Sense
        }
        List *nextHigherFreqList = new List();
        if (freqListMap.find(node->cnt + 1) != freqListMap.end()) {
            nextHigherFreqList = freqListMap[node->cnt + 1]; // List containing Nodes which are accessed 1 time more than the deleted Node
            // (means the List having Nodes with use-frequency 1 more than use-frequency of the Nodes from the LFU list)
        }
        node->cnt += 1;                                      // increment the use-frequency of that Node by 1, bcz it is being accessed once more
        nextHigherFreqList->addNode(node);                   // add that Node at the front (MRU position) of the newly created List
        freqListMap[node->cnt] = nextHigherFreqList;         // Map the List against the new use-frequency
        addrOfKey[node->key] = node;                         // store the address of the newly added node against the key
    }

public:
    LFUCache(int capacity) {
        cacheCapacity = capacity;                           // max capacity of the cache
        minFreq = 0;
        currSize = 0;
    }

    int get(int key) {
        if (addrOfKey.find(key) == addrOfKey.end()) {       // if no such key exists in the record
            return -1;
        }
        Node *resNode = addrOfKey[key];                     // if the key exists, find the Node corresponding to that key
        int res = resNode->val;                             // get the value stored against that key
        updateFreqListMap(resNode);                         // make the changes associated to the Node containing the key
        return res;                                         // returns the value stored against that key
    }

    void put(int key, int value) {
        if (cacheCapacity == 0) {                           //  if the cache-size is zero, don't update the value against the key and return
            return;
        }
        if (addrOfKey.find(key) != addrOfKey.end()) {       // if the key is present in the address-map
            Node *existingNode = addrOfKey[key];            // find the Node that the key is residing in
            existingNode->val = value;                      // update the existing value of that Node with the new given value
            updateFreqListMap(existingNode);                // make the changes associated to the Node containing the key
        } else {                                            // if the key is NOT present in the address-map
            if (currSize == cacheCapacity) {                // if size of the cache reaches its maximum capacity, if cache is full
                List *list = freqListMap[minFreq];          // fetch the head of the List having LFU Nodes
                Node *prevNode = list->tail->prev;          // find the LRU Node from that List
                int keyToBeErased = prevNode->key;          // find the key corresponding to the LRU Node
                addrOfKey.erase(keyToBeErased);             // delete the address of that key
                freqListMap[minFreq]->deleteNode(prevNode); // delete the LRU node from the LRU location of that List
                currSize--;                                 // decrement the current size of cache, now cache is NOT full
            }

            // if the given key is NOT present in the address-map
            currSize++;                                     // increment the current size of the cache
            minFreq = 1;                                    // set the use - frequency of the Node containg that key to 1

            List *listFreq = new List();
            if (freqListMap.find(minFreq) != freqListMap.end()) {
                listFreq = freqListMap[minFreq];            // find the List with min-frequency (List having the LFU Nodes)
            }
            Node *newNode = new Node(key, value);           // create a new Node with the given key and value
            listFreq->addNode(newNode);                     // add the new Node at the front (MRU position) of the List having LFU Nodes
            addrOfKey[key] = newNode;                       // store the address of the MRU Node from the List having LFU Nodes
            freqListMap[minFreq] = listFreq;                // store the List having LFU Nodes against the minimum use-frequency
        }
    }
};



/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
