class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> pq1; //maxheap in first part
    priority_queue<int,vector<int>,greater<int>> pq2; // min heap in second half
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(pq1.size()==0 || num<=pq1.top()) pq1.push(num);
        else pq2.push(num);
        if(pq1.size()>pq2.size()+1)
        {
            int k=pq1.top();
            pq2.push(k);
            pq1.pop();
        }
        if(pq2.size()>pq1.size())
        {
            int k=pq2.top();
            pq1.push(k);
            pq2.pop();
        }
        
    }
    
    double findMedian() {
        if(pq1.size() == pq2.size())
        return (pq1.top()+pq2.top())/2.0;
        return pq1.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
