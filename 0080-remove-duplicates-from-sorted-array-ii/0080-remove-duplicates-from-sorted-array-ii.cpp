class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s1,s2;

        for(int i = nums.size() - 1; i >= 0; i--){
            if(!s1.contains(nums[i])){
                s1.insert(nums[i]);
                nums.erase(nums.begin() + i);
            }
        }

            for(int i = nums.size() - 1; i >= 0; i--){
            if(!s2.contains(nums[i])){
                s2.insert(nums[i]);
                nums.erase(nums.begin() + i);
            }
        }
        nums.clear();
        for(auto x : s1){
            nums.push_back(x);
        }
        for(auto x : s2){
            nums.push_back(x);
        }

        sort(nums.begin(), nums.end());
        return nums.size();
    }
};