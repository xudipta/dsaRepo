class Solution {
public:
    void swap(int &a, int &b){
        b=a+b;
        a=b-a;
        b=b-a;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        while(l<h){
            if(nums[l]%2==0){
                l++;
            }else{
                swap(nums[l],nums[h]);
                h--;
            }
        }
        return nums;
    }
};