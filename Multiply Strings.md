[Multiply Strings](https://leetcode.com/problems/multiply-strings/)
```cpp
class Solution {
private:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        while(num1.length()<num2.length()) num1+='0';
        while(num2.length()<num1.length()) num2+='0';
        int n=num2.length();
        int carry=0;
        int i=0;
        while(i<n)
        {
            int temp=carry;
            carry=(carry+num1[i]-'0'+num2[i]-'0')/10;
            num1[i]=(num1[i]-'0'+num2[i]-'0'+temp)%10 +'0';
            i++;
        }
        if(carry>0) num1.push_back(carry+'0');
        reverse(num1.begin(),num1.end());
        return num1;
        
    }
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        string ans;
        int shift=-1;
        for(int i=num2.length()-1;i>=0;i--)
        {
            string temp;
            shift++;
            for(int x=0;x<shift;x++) temp+='0';
            int carry=0;
            for(int j=num1.length()-1;j>=0;j--)
            {
                temp += ((num2[i]-'0') * (num1[j]-'0')+carry)%10 +'0';
                carry=((num2[i]-'0') * (num1[j]-'0')+carry)/10;
            }
            
            if(carry>0) temp+=carry+'0';
            reverse(temp.begin(),temp.end());
            //cout<<temp<<' ';
            ans=addStrings(ans,temp);
        }
        return ans;
    }
};
```
