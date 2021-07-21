
bool compare(string x,string y)
    {
        return x+y >y+x;
    }
class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        vector<string> t;
        for(int i=0;i<nums.size();i++) t.push_back(to_string(nums[i]));
        sort(t.begin(),t.end(),compare);
        string s="";
        if(t[0]=="0") return "0";
        for(int i=0;i<t.size();i++)
        {
            s+=t[i];
        }
        if(s[0]=='0') return "0";
        return s;
    }
};
/****************************************************/
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(to_string(nums[i])+to_string(nums[j]) < 
                   to_string(nums[j])+to_string(nums[i]))
                    swap(nums[i],nums[j]);
            }
        }
        if(nums[0]==0) return "0";
        string ans;
        for(int &i:nums) ans+=to_string(i);
        return ans;
    }
};
