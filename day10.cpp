class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> positive;
        vector<int> negative;
        for (int i=0;i<n;i++) {
            if(nums[i]>0) positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }
        int i=0;
        int j=0;
        for (int k=0;k<n;k++) {
            if(k%2==0) nums[k]=positive[i++];
            else nums[k]=negative[j++];
        }
        return nums;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int maxProfit = 0;
        int minPrice = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums[i] < minPrice) {
                minPrice = nums[i];  
            }
            maxProfit = max(maxProfit, nums[i] - minPrice);  
        }
        
        return maxProfit;
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int flag=0;
        int idx=-1;
        for (int i=n-2;i>=0;i--) {
            if(arr[i]<arr[i+1]) {
                idx=i;
                flag=1;
                break;
            }
        }
        if(flag==0) {
            reverse(arr.begin(),arr.end());
        }
        if(flag==1) {
        for (int i=n-1;i>idx;i--) {
            if(arr[i]>arr[idx]) {
                swap(arr[i],arr[idx]);
                break;
            }
        }
        reverse(arr.begin()+idx+1,arr.end());
    }
}
};
