//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
struct meeting{
    int start;
    int end;
}
class Solution
{
    public:
    bool static comparator(struct meeting m1, struct meeting m2){
        if(m1.end<=m2.end) return true;
        else return false;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<meeting> meet(n);
        for(int i =0; i <n ; i++){
            meet[i].start=start[i];
            meet[i].end=end[i];
        }
        sort(meet.begin(),meet.end(),comparator);
        int ans=0;
        int limit=INT_MIN;
        for(int i=0; i<n; i++){
            if(limit<meet[i].end){
                limit=meet[i].end;
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];
        for (int i = 0; i < n; i++) cin >> end[i];
        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends