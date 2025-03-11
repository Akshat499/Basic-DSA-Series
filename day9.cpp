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
