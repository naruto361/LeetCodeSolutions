class Solution {
public:
    vector<int> grayCode(int n) {
        int k=(1<<n);
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back((i^i>>1));
        }
        return ans;
    }
};
/*******************************************************/
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<(1<<n);i++)
        {
            vector<int> t;
            int k=i;
            while(k)
            {
                t.push_back(k%2);
                k/=2;
            }
            reverse(t.begin(),t.end());
            int ans=0;
            int p=t.size()-1;
            ans|=(1<<p);
            p--;
            for(int j=1;j<t.size();j++)
            {
                if(t[j]^t[j-1]==1)
                {
                    ans|=(1<<p);
                }
                p--;
            }
            //cout<<ans<<" ";
            v.push_back(ans);
        }
        return v;
    }
};
