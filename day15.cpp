class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            int lo = 0, hi = m - 1;
            
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if(target>matrix[i][hi]) break;
                
                if (matrix[i][mid] == target) {
                    return true;
                } else if (matrix[i][mid] < target) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {

        for(int i=0;i<a.size();i++){
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        return b[k-1];
        
    }
};



//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if (row == 0) return false;
        int col = matrix[0].size();

        // Binary search to find the correct row
        int top = 0, bottom = row - 1;
        while (top <= bottom) {
            int middle = (top + bottom) / 2;
            if (matrix[middle][0] <= target && target <= matrix[middle][col - 1]) {
                // Binary search within the row
                int lo = 0, hi = col - 1;
                while (lo <= hi) {
                    int mid = (lo + hi) / 2;
                    if (target == matrix[middle][mid]) return true;
                    else if (target < matrix[middle][mid]) hi = mid - 1;
                    else lo = mid + 1;
                }
                return false;  // If the row is found but target is not in it
            } else if (target < matrix[middle][0]) {
                bottom = middle - 1;
            } else {
                top = middle + 1;
            }
        }
        return false;
    }
};
