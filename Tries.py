# Implimentation of Tries in Python

class Trie:
    def __init__(self,S=[]):
        self.root = {}
        for s in S:
            self.add(s)
    def add(self,s):
        curr = self.root
        s = s + "$"
        for c in s:
            if c not in curr.keys():
                curr[c] = {}
            curr = curr[c]
    def query(self,s):
        curr = self.root
        for c in s:
            if c not in curr.keys():
                return(False)
            curr = curr[c]
        if "$" in curr.keys():
            return(True)
        else:
            return(False)
        
T = Trie()
T.add('car')
T.add('dog')
T.add('done')
T.add('card')
T.add('care')
print(T.query('cat'))
print(T.query('dog'))

# Output
# False
# True
