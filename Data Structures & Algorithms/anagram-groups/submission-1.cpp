class Solution {
public:
    bool check_anagram(string s1, string s2){
        if(s1.size() != s2.size()) return false;
        unordered_map<char, int> m_s1;
        unordered_map<char, int> m_s2;
        for(int i =0; i<s1.length(); i++){
            m_s1[s1[i]]++;
            m_s2[s2[i]]++;
        }
        return m_s1 == m_s2;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.size() <= 1) {
            ans.push_back(strs);
            return ans;
        } 

        for(int i = 0; i < strs.size(); i++) {
            vector<string> t;
            t.push_back(strs[i]);
            for(int j = i+1 ; j < strs.size(); j++){
                if(check_anagram(strs[i], strs[j]))
                {
                    t.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            ans.push_back(t);
        }

        return ans;
    }
};
