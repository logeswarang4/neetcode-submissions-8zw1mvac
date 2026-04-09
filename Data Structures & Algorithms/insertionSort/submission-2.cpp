// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> ans;

        if(pairs.size() == 0) return ans;
        
        ans.push_back(pairs);

        for(int i = 1 ; i < pairs.size(); i++){
            Pair p = pairs[i];
            int j = i - 1;

            while( j >= 0 && pairs[j].key > p.key){
                pairs[j + 1] = pairs[j];
                j--;
            } 

            pairs[j+1] = p;
            ans.push_back(pairs);
        }
        return ans;
    }
};
