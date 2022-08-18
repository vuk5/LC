class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int maxi=*max_element(arr.begin(),arr.end());
        vector<int> freq(maxi+1,0);
         for(auto it:arr)freq[it]++;
        
        vector<pair<int,int>> v;
       
        for(int i=0;i<freq.size();i++){
            if(freq[i]>=1){
                v.push_back({freq[i],i});
            }
        }
        int count=0;
        int prev=0;
        sort(v.begin(),v.end());
    
        for(auto it=v.end()-1;it>=v.begin();it--){
            
            count++;
            if(it->first+prev>=(arr.size()/2))
                 break;
            else{
                prev+=it->first;
            }
        }
        return count;
        
        
    }
};