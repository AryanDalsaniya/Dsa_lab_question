class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> f;

    for (int num : nums) {
        f[num]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mh;
    
    for (auto& a : f) {
        mh.push({a.second, a.first});
        if (mh.size() > k) {
            mh.pop();
        }
    }

    
    vector<int> ans;
    while (!mh.empty()) {
        ans.push_back(mh.top().second);
        mh.pop();
    }

    return ans; 
    }
};
