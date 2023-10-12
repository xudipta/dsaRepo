class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //approch: two pointer
        int n=nums.size();
        int i=0;
        int j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }else{
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;
    }
};