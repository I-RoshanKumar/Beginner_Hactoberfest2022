/*
    Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

    Implement the LRUCache class:

    - LRUCache(int capacity) Initialize the LRU cache with positive size capacity.

    - int get(int key) Return the value of the key if the key exists, otherwise return -1.

    - void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache.
    If the number of keys exceeds the capacity from this operation, evict the least recently used key.

    - The functions get and put must each run in O(1) average time complexity.
*/


#include<bits/stdc++.h>
using namespace std;


            /** First Approach **/

// Solution using the STL Doubly-linked-list and two different hashmaps
class LRUCacheSol {
private:
	list<int> cache;                                    // cache as doubly-linked-list
	unordered_map<int, int> keyVal;                     // hashmap for storing the value corresponding to a key
	unordered_map<int, list<int>::iterator> addrOfKey;	// hashmap for storing the address corresponding to a key
	int cacheSize, cacheCapacity;

public:
	LRUCacheSol(int capacity) {
		cacheCapacity = capacity;       		// reset the max capacity of the cache
		cacheSize = 0;                  		// reset the current size of cache
	}

	int get(int key) {
		if (keyVal.find(key) == keyVal.end()) {	// if no such key exists in the record
			return -1;
		}
		auto it = addrOfKey[key];       		// find the address of the key
		cache.erase(it);                		// delete that key from the cache
		addrOfKey.erase(key);           		// delete the address of that key also
		cache.push_front(key);          		// add that key at the beginning of cache bcz now it's MRU
		addrOfKey[key] = cache.begin();  		// store the new-address in the address-map
		return keyVal[key];						// returns the value against the given key
	}

	void put(int key, int value) {
		if (keyVal.find(key) != keyVal.end()) {
			auto it = addrOfKey[key];       	// find the address of the key
			cache.erase(it);                	// delete that key from the cache
			addrOfKey.erase(key);           	// delete the address of that key also
			keyVal.erase(key);					// delete the value stored against that key also
			cacheSize--;						// decrease the size of the cache
		}
		if (cacheSize == cacheCapacity) {		// if size of the cache reaches its maximum capacity
			int keyToBeErased = cache.back();	// find the key that is present at the LRU location
			addrOfKey.erase(keyToBeErased);     // delete the address of that key
			keyVal.erase(keyToBeErased);		// delete the value stored against that key also
			cache.pop_back();					// delete the LRU element from the LRU location also
			cacheSize--;						// decrease the size of the cache
		}
		cache.push_front(key);          		// add that key at the beginning of cache bcz now it's MRU
		addrOfKey[key] = cache.begin();  		// store the new-address in the address-map
		keyVal[key] = value;  					// store the new-value against the given key
		cacheSize++;							// increase the size of the cache
	}
};







            /** Second Approach **/

// Doubly Linked-List class with prev and next pointers
class Node {
public:
    int key, val;
    Node *next, *prev;
    Node(int _key, int _val) {
        key = _key;
        val = _val;
    }
};


// Solution using the Custom Doubly-linked-list and a single hashmap
class LRUCache {
private:
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);
    unordered_map<int, Node*> addrOfKey;    // hashmap for storing the address corresponding to a key
    int cacheCapacity;

    // adds a new node in-between two pre-existing nodes 
    void addNode(Node *newNode) {
        Node *temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }

    // breaks the prev and next links of the node to be removed
    void deleteNode(Node *delNode) {
        Node *delPrev = delNode->prev;
        Node *delNext = delNode->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
    }

public:
    LRUCache(int capacity) {
        cacheCapacity = capacity;                       // reset the max capacity of the cache
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (addrOfKey.find(key) == addrOfKey.end()) {	// if no such key exists in the record
            return -1;
        }
        Node *resNode = addrOfKey[key];                 // find the address of the key
        int res = resNode->val;                         // get the value of the key
        addrOfKey.erase(key);                           // delete that key from the cache
        deleteNode(resNode);                            // delete the address of that key also
        addNode(resNode);                               // add that key at the beginning of cache bcz now it's MRU
        addrOfKey[key] = head->next;                    // store the new-address in the address-map
        return res;                                     // returns the value against the given key
    }

    void put(int key, int value) {
        if (addrOfKey.find(key) != addrOfKey.end()) {
            Node *existingNode = addrOfKey[key];        // find the address of the key that already exists
            addrOfKey.erase(key);                       // delete the address of that key
            deleteNode(existingNode);                   // delete that node for updating the cache with new node
        }
        if (addrOfKey.size() == cacheCapacity) {        // if size of the cache reaches its maximum capacity
            Node *prevNode = tail->prev;                // find the LRU node in the cache
            int keyToBeErased = prevNode->key;          // find the key that is present at the LRU location
            addrOfKey.erase(keyToBeErased);             // delete the address of that key
            deleteNode(prevNode);                       // delete the LRU node from the LRU location
        }
        Node *newNode = new Node(key, value);           // create a new node with the key and value
        addNode(newNode);                               // add the new node at the beginning of the cache bcz now it's MRU
        addrOfKey[key] = head->next;                    // store the new-address in the address-map
    }
};


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
