class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        if(nums.size() <=1 ) return nums;

        map<int, int> m;
        for(int i =0; i < nums.size(); i++){
            m[nums[i]]++;
        }

        vector<std::pair<int, int>> vec(m.begin(), m.end());

        sort(vec.begin(), vec.end(), [](std::pair<int,int> i, std::pair<int,int> j ){
            return i.second > j.second;
        });

        for(int i =0 ; i < k; i++ ){
            ans.push_back(vec[i].first);
        }

        return ans;

    }
};
