class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        char arr[26];
        for (int i = 0; i < 26; i++) arr[i] = 0;

        for (auto it: s){
            arr[it - 'a'] += 1;
        }
        for (auto it: t){
            arr[it - 'a'] -= 1;
        }

        for ( int i = 0; i < 26; i++){
            if (arr[i] > 0) return false;
        }
        return true;


        
    }
};
