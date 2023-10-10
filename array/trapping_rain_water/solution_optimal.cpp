/* 
Approach: Take 2 pointers l(left pointer) and r(right pointer)
 pointing to 0th and (n-1)th index respectively. Take two 
 variables leftMax and rightMax and initialize them to 0. 
 If height[l] is less than or equal to height[r] then if 
 leftMax is less than height[l] update leftMax to height[l] 
 else add leftMax-height[l] to your final answer and move 
 the l pointer to the right i.e l++. If height[r] is less 
 than height[l], then now we are dealing with the right block. 
 If height[r] is greater than rightMax, then update rightMax 
 to height[r] else add rightMax-height[r] to the final answer. 
 Now move r to the left. Repeat these steps till l and r 
 crosses each other.

Intuition: We need a minimum of leftMax and rightMax.
So if we take the case when height[l]<=height[r] we increase l++,
 so we can surely say that there is a block with a height 
 more than height[l] to the right of l. And for the same reason 
 when height[r]<=height[l] we can surely say that there is a 
 block to the left of r which is at least of height[r]. So by 
 traversing these cases and using two pointers approach the time 
 complexity can be decreased without using extra space.
 */
 class Solution {
public:
    int trap(vector<int>& height) {
       
    }
};
