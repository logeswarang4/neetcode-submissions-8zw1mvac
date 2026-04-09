class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() <=0 || t.length() <=0 ) return false;

        map<char, int> ms;
        map<char, int> mt;

        for(int j=0; j<s.size();j++){
            ms[s[j]]++;
        }
        for(int j=0; j<t.size();j++){
            mt[t[j]]++;
        }

        if(ms.size() != mt.size())  return false;
        for(auto &m : ms) {
            cout<<"m: " << m.first <<endl;
            auto it = mt.find(m.first);
            cout<<"it: " << it->first << " " << it->second<< endl;
            if(it == mt.end()) {
                return false;
            }
            if(it->second != m.second) {
                return false;
            }
        }
        return true;
    }
};
