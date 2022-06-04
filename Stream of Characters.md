```cpp
class StreamChecker {
public:
    struct Node{
      Node* arr[26];  
      bool isEnd;
    };
    Node* root=new Node();
    string t;
    StreamChecker(vector<string>& words) {
        for(string &s:words)
        {
            Node* temp=root;
            for(int i=s.length()-1;i>=0;i--)
            {
                char c=s[i];
                if(!temp->arr[c-'a']) temp->arr[c-'a']=new Node();
                temp=temp->arr[c-'a'];
            }
            temp->isEnd = true;
        }
    }
    
    bool query(char letter) {
        t+=letter;
        Node* temp=root;
        for(int i=t.length()-1;i>=0;i--)
        {
            char c=t[i];
            if(!temp->arr[c-'a']) return false;
            temp=temp->arr[c-'a'];
            if(temp->isEnd) return true;
        }
        return false;
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
```
