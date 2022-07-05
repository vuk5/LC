
//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

//TC=O(N),SC=O(1)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        unordered_set<int> s;
        for(auto it:nums){
            s.insert(it);      //initially insert the numbers in array to set
        }
        int maxi=0;
        //if nums[i]-1 exists for nums[i] continue
        
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){       //if there is no previous num in set
               int cur=nums[i];
                int count=1;
                while(s.find(cur+1)!=s.end()){      //increase count till the next is not there in set
                    count++;
                    cur++;
                    
                }
                maxi=max(maxi,count);                //return maximum  of all counts
            }
        }
            return maxi;
    }
};