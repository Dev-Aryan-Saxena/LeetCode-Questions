class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int w1 = 0;
        int w2 = 0;
        while(w1 < word1.size() || w2 < word2.size()){
            if (w1<word1.size()){
                s += word1[w1];
                w1++;
            }
            if(w2< word2.size()){
                s += word2[w2];
                w2++;
            }
        }
        return s;
    }
};