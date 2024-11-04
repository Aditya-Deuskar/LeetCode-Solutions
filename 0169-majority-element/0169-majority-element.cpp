class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // return nums[n/2];
        // or

        unordered_map<int,int> umap;
        int maxcount = 0;
        int result = 0;
        for(auto x : nums){
          umap[x]++;  
        }

        for(auto x : umap){
            if(x.second > maxcount){
                maxcount = x.second;
                result = x.first;
            }
        }

        return result;
    }
};