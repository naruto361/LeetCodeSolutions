int numComponents(ListNode* head, vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(int &i:nums) mp[i]=true;
        int ans=0;
        ListNode* t=head;
        bool c=false;
        while(t)
        {
            if( mp[t->val]==true )
            {
                if(c==false) ans++,c=true;
            }
            else c=false;
            t=t->next;
            cout<<ans<<" ";
        }
        return ans;
    }
