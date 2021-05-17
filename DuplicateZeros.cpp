void duplicateZeros(vector<int>& arr) {
        int l=arr.size();
        int i=arr.size()-1;
        while(1)
        {
            if(arr[i]==0) arr.insert(arr.begin()+i,0);
            i--;
            if(i<0) break;
        }
        arr.erase(arr.begin()+l,arr.end());
        
    }
