#include<bits/stdc++.h>
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int waterAmount=0;
        for(int i=0; i<n;i++){
            int leftMax=0,rightMax=0;
            int k=i;
            while(k>=0){
                if(leftMax<height[k]){
                    leftMax=height[k];
                }
                k--;
            }
            k=i;
            while(k<n){
                if(rightMax<height[k]){
                    rightMax=height[k];
                }
                k++;
            }
            waterAmount+=min(rightMax,leftMax)-height[i];
        }
        return waterAmount;
    }
};
