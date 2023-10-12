class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> mp;
      int n=nums.size();
      vector<int> ans;
      for(int i=0;i<n;i++){
        mp[nums[i]]=i;
      }
      for(int i=0; i<n; i++){
        int num=target-nums[i];
        if(mp.find(num)!=mp.end() && i!= mp[num]){
            ans.push_back(i);
            ans.push_back(mp[num]);
            return ans;
        }
      }
      return ans;
    }
};
