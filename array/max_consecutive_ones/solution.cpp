//simillar to kadens algorithm
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int onesCurrent=0;
        int maxOnesTillNow=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]!=1){
                maxOnesTillNow=max(onesCurrent,maxOnesTillNow);
                onesCurrent=0;
            }else{
                onesCurrent++;
            }
        }
        return max(onesCurrent,maxOnesTillNow);
    }
};