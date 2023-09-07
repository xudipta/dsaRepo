class Solution {
public:
    //Kadane's algorithm
    int maxSubArray(vector<int>& nums) {
        int sum_so_far=INT_MIN;
        int sum_till_here=0;
        int n=nums.size();
        for(int i=0; i<n;i++){
            sum_till_here+=nums[i];
            if(sum_till_here > sum_so_far){
                sum_so_far=sum_till_here;
            }
            if(sum_till_here<0){
                sum_till_here=0;
            }
        }
        return sum_so_far;
    }
};