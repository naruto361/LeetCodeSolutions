## [Two Sum II - Input array is sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

```cpp
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target) return {i+1,j+1};
            else if(numbers[i]+numbers[j]<target)
            {
                while(numbers[i]==numbers[i+1]) {i++;if(i==numbers.size()-1) break;}
                i++;
            }
            else
            {   
                while(numbers[j]==numbers[j-1]) {j--;if(j==0) break;}
                j--;
            }
        }
        return {0,0};
    }
```
