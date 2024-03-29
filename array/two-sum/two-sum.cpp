class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int s= nums.size();
        map<int,int> t;
        for(int i=0;i<s;i++){
            auto it= t.find(target-nums[i]);
            if(it!=t.end()){
                res.push_back(i);
                res.push_back(it->second);
                return res;
            }
             t[nums[i]]=i;
        }
        return res;
    }
};
