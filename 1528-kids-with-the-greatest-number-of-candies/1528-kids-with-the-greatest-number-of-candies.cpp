class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> output;
        for(auto x : candies){
            if(x>= max){
                max = x;
            }
        }

        for(int i=0; i< candies.size(); i++){
            if((candies[i] + extraCandies) >= max){
                output.push_back(1);
            }
            else{
                output.push_back(0);
            }
        }

        return output;

    }
};