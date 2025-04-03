class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
      unordered_map<int,int> m;
      vector<int> a;
      for(int i=0;i<n.size();i++) {
        int x = target - n[i];
        if(m.find(x) != m.end() ){
             a.push_back(i);
             a.push_back(m[x]);
             return a;
        }
        m[n[i]]  = i;
      }
      return a;
    }
};
