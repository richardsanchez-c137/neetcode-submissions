class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> countA;
        unordered_map<char, int> countB;

        for(int i=0; i<s.length(); ++i){
            countA[s[i]]++;
            countB[t[i]]++;
        }
        return countA == countB;
    }
};