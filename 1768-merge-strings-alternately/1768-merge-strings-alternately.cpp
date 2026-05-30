class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0;
        for(;i < min(word1.length(), word2.length()); i++){
            result.push_back(word1[i]);
            result.push_back(word2[i]);
        }
        while( i < word1.length()){
            result.push_back(word1[i]);
            i++;
        }

        while( i < word2.length()){
            result.push_back(word2[i]);
            i++;
        }
        return result;
    }
};