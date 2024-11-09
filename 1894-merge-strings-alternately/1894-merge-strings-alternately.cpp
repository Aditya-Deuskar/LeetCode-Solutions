class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int small;
        string larger, op;
        if(word1.length()<= word2.length()){
            small = word1.length();
            larger = word2;
        }
        else{
            small = word2.length();
            larger = word1;
        }
        for(int i=0; i<small; i++){
            op += word1[i];
            op += word2[i];
        }

        for(int i= small; i< larger.length(); i++){
            op += larger[i];
        }

        return op;
    }
};