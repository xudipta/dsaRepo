class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        //sort the input array first
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            //check and skip for same i values
            if(i!=0 && nums[i]==nums[i-1]) continue;
            //two moving pointers
            int j=i+1;
            int k=n-1;
            while(j<k){
                /*
                    3 conditions
                    sum>0 : k--
                    sum<0 : j++
                    sum==0 : add to res and skip same 
                 */
                int tempSum= nums[i]+nums[j]+nums[k];
                if(tempSum>0) k--;
                else if(tempSum<0) j++;
                else{
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    //insert to res and move pointers
                    ans.push_back(temp);
                    j++;
                    k--;
                    //skip duplicate elements
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        
        return ans;
    }
};