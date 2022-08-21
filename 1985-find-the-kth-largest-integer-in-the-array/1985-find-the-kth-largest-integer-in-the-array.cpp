class Solution {
    
public:
 struct compare{
        bool operator()(string &a, string &b){
            if(a.size() != b.size())
                return a.size() < b.size();
            return a<b;
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
       priority_queue<string,vector<string>,compare> pq(nums.begin(),nums.end());
        for(int i=0;i<k-1;i++)pq.pop();
        return pq.top();
        
    }
};