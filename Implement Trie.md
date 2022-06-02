```cpp
class Trie {
public:
    struct Node{
      Node* arr[26];
        bool isEnd;
    };
    Node* root;
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* temp=root;
        for(char &c:word)
        {
            if(!temp->arr[c-'a']) temp->arr[c-'a']=new Node();
            temp=temp->arr[c-'a'];
        }
        temp->isEnd=true;
    }
    
    bool search(string word) {
        Node* temp=root;
        for(char &c:word)
        {
            if(!temp->arr[c-'a']) return false;
            temp=temp->arr[c-'a'];
        }
        return temp->isEnd;
    }
    
    bool startsWith(string prefix) {
        Node* temp=root;
        for(char &c:prefix)
        {
            if(!temp->arr[c-'a']) return false;
            temp=temp->arr[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
```
