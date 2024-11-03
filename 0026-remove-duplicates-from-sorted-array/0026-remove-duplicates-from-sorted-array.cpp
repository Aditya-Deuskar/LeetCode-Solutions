class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;

        s.insert(nums.begin(), nums.end());
        nums.clear();
        for(auto x:s){
            nums.push_back(x);
        }
    return nums.size();
    }
};