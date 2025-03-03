for (int i=0;i<n;i++) {
            int flag=0;
            for (int j=0;j<m;j++) {
                if(nums1[i][0]==nums2[j][0]) {
                    int val1;
                    int val;
                    val1=nums1[i][0];
                    val=nums1[i][1]+nums2[j][1];
                    merge.push_back({val1, val});
                    flag=1;
                }
            }
            if(flag==0) {
                merge.push_back(nums1[i]);
            }
            

        }


Question 2 
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
    
        vector<vector<int>> merge;
        for (int i=0;i<n;i++) {
            int flag=0;
            for (int j=0;j<m;j++) {
                if(nums1[i][0]==nums2[j][0]) {
                    int val1;
                    int val;
                    val1=nums1[i][0];
                    val=nums1[i][1]+nums2[j][1];
                    merge.push_back({val1, val});
                    flag=1;
                }
            }
            if(flag==0) {
                merge.push_back(nums1[i]);
            }
            

        }
        for (int i=0;i<m;i++) {
            int flag=0;
            for (int j=0;j<n;j++) {
                if(nums2[i][0]==nums1[j][0]) {
                    flag=1;
                }
            }
            if(flag==0) {
                merge.push_back(nums2[i]);
            }

        }
        int l=merge.size();
        for (int i=0;i<l-1;i++) {
            for (int j=0;j<l-1;j++) {
                if(merge[j][0]>merge[j+1][0]) {
                    swap(merge[j],merge[j+1]);
                }
            }
        }

        
        return merge;
    }
};
