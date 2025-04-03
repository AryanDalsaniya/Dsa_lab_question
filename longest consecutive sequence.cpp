class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        unordered_set<int> s(n.begin(),n.end());

        int ans =0;
       
        for( int val: s){
         if(s.find(val-1)==s.end()){
         int cn = val;
         int streak =1;
         
         while(s.find(cn+1)!=s.end()){
            cn++;
            streak++;
         }
         
         ans = max(streak,ans);
         }
        }
        return ans;
    }
};
