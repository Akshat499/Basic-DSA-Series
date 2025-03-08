class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int m) {
        //[1,0,0,1,0,0]
        int n=arr.size();
        if (m==0 ) return true;
        int flip=0;
        if(n==1 && arr[0]==0) return true; 
        int count=0;
        for (int i=0;i<n;i++) {
            if(arr[i]==0) {
                if(i==0) {
                    if (i+1<n) {
                        if (arr[i+1]==0) {
                        arr[i]=1;
                        flip++;
                    }
                    }
                    else {

                    }
                }
                else if(i==n-1) {
                    if (arr[n-2]==0) {
                        arr[i]=1;
                        flip++;
                    }
                }
                else {
                    if(arr[i-1]==0 && arr[i+1]==0) {
                        arr[i]=1;
                        flip++;
                    }
                }
            }
            if (flip==m) return true;
        }
        return false;
    }
    
};
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum=0;
        int minsum=INT_MAX;
        int n=nums.size();
        for (int i=l;i<=r;i++) {
            sum=0;
            int j=0;
            int k=i;
            for (int a=0;a<k;a++) {
                sum+=nums[a];
            }
            if(sum<minsum && sum>0) minsum=sum;
            while(k<n) {
                sum+=nums[k++]-nums[j++];
                if(sum<minsum && sum>0) minsum=sum;
            }
            
        }
        if(minsum==INT_MAX) return -1;
        return minsum;
    }
};
