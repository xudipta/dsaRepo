class Solution {
public:
    void swap(int &a, int &b){
        int t=a;
        a=b;
        b=t;
    }
    void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        while(m<=h){
            switch(nums[m]){
                case 0:
                    swap(nums[m],nums[l]);
                    l++;
                    m++;
                    break;
                case 1:
                    m++;
                    break;
                case 2:
                    swap(nums[m],nums[h]);
                    h--;
                    break;
            }
        }

    }
};