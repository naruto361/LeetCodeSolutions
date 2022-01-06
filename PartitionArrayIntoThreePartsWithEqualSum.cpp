class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int &i:arr) sum+=i;
        if(sum%3!=0) return false;
        int k=sum/3;
        bool ok1=false,ok2=false,ok3=false;
        int temp=0;
        for(auto &i:arr)
        {
            temp+=i;
            if(!ok1 && temp==k) ok1=true;
            else if(!ok2 && ok1 && temp==2*k) ok2=true;
            else if(!ok3 && ok1 && ok2 && temp==sum) ok3=true;
        }
        return ok1 && ok2 && ok3;
    }
};
