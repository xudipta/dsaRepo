double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int n=A.size();
    int m=B.size();
    if(n>m) return findMedianSortedArrays(B,A);
    
    int low = 0;
    int high = n;
    int tn= n+m;
    int left = (n+m+1)/2;
    while(low<=high){
        int i=(low+high)>>1;
        int j= left-i;
        int l1=INT_MIN, l2=INT_MIN;
        int r1=INT_MAX, r2=INT_MAX;
        
        if(i<n) r1=A[i];
        if(j<m) r2=B[j];
        if(i-1 >=0) l1=A[i-1];
        if(j-1 >=0) l2=B[j-1];
        if(l1<=r2 && l2<=r1){
            if(tn%2==1) return max(l1,l2);
            return (double(max(l1,l2)+min(r1,r2)))/2.0;
        }
        else if( l1>r2) high = i-1;
        else low=i+1;
    }
    return 0;
    
}
