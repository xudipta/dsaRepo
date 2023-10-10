class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> tempset;
            for(int j=i+1;j<n;j++){
                int searchElement=-nums[i]-nums[j];
                if(tempset.find(searchElement)!=tempset.end()){
                    vector<int> tempRes={nums[i],nums[j],searchElement};
                    sort(tempRes.begin(),tempRes.end());
                    st.insert(tempRes);
                }
                 tempset.insert(nums[j]);
            }
           
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};
