class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        left.push_back(0);
        right.push_back(0);
        int n=height.size();
        for(int i=0,int j=n-1;i<n;i++,j--){
            if(left[i]<height[i]){
                left.push_back(height[i]);
            }else{
                left.push_back(left[i]);
            }
            if(right[i]<height[i]){
                right.push_back(height[i]);
            }else{
                right.push_back(right[i]);
            }
        }
    }
};