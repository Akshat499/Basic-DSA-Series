class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n=a.size();
        sort(a.begin(),a.end());
        int ans=INT_MAX;
        int temp;
        for(int i=0;i<=n-m; i++) {
             temp= a[i+m-1] - a[i];
            if(ans>=temp) ans=temp;
        }
        return ans;
    }
};


//{ Driver Code Starts.

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        else return n-1;

    }
};
// } Driver Code Ends
