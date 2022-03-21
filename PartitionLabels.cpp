class Solution {
public:
    vector<int> partitionLabels(string s) {
        int l=s.length();
        vector<int> first(26,l+1);
        vector<int> last(26,-1);
        for(int i=1;i<=s.length();i++)
        {
            if(first[s[i-1]-'a']==l+1)
                first[s[i-1]-'a']=i;
            last[s[i-1]-'a']=i;
        }
        vector<int> ans;
        int finish=1;
        int partstart=1;
        for(int i=1;i<=s.length();i++)
        {
            finish=max(finish,last[s[i-1]-'a']);
            if(finish==i)
            {
                ans.push_back(i-partstart+1);
                partstart=i+1;
            }
        }
        return ans;
    }
};
//////////////////////////////////////////////////////////////
vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        vector<int> ans;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]=i;
        }
        int last=mp[s[0]];
        int len=0;
        for(int i=0;i<s.length();i++)
        {
            last=max(last,mp[s[i]]);
            len++;
            if(last==i) {ans.push_back(len);len=0;}
        }
        return ans;
    }
/////////////////////////////////////////////////////////////
vector<int> partitionLabels(string S) {
        vector<int> ans;
        vector<vector<int>> v(26,vector<int> (2,-1));
        for(int i=0;i<S.length();i++)
        {
            if(v[S[i]-'a'][0]==-1)
            v[S[i]-'a'][0]=i;
            v[S[i]-'a'][1]=i;
        }
        int f=v[S[0]-'a'][0],s=v[S[0]-'a'][1];
        for(int i=1;i<S.length();i++)
        {
            if(v[S[i]-'a'][0]>s)
            {
                ans.push_back(s-f+1);
                f=v[S[i]-'a'][0];
                s=v[S[i]-'a'][1];
                if(i==S.length()-1) ans.push_back(f-s+1);
            }
            else if(v[S[i]-'a'][0]<s)
            {
                f=min(f,v[S[i]-'a'][0]);
                s=max(s,v[S[i]-'a'][1]);
                if(i==S.length()-1) ans.push_back(s-f+1);
            }
        }
        return ans;
        
    }
