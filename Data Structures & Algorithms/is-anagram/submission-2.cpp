class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        multiset<char> s_set;
        multiset<char> t_set;
        int set_size = s_set.size();
        for ( auto it : s ){
            s_set.insert(it);
        }
        for ( auto it : t ){
            t_set.insert(it);
        }
        if (s_set != t_set) return false;
        else return true;
    }
};
