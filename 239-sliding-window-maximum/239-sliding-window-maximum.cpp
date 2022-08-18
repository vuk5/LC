class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;    //to maintain elements indices in decreasing order from front and back
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() and dq.front()==(i-k))dq.pop_front();   //if it goes out of bound of k
            while(!dq.empty() and nums[i]>nums[dq.back()])dq.pop_back();  //pop all small elements than nums[i]
            dq.push_back(i);   //push that element index
            if(i>=k-1)ans.push_back(nums[dq.front()]);  //if i stands at k-1 that is last element of sliding window then that is the maximum element for that sliding window
            
        }
        return ans;
    }
};