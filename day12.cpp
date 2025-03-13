class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi) {
            int mid=(hi+lo)/2;
            if (nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else {
                lo=mid+1;
            }
        }
        return -1;
    }
    
};

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int k=target;
        while(lo<=hi) {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==k) {
                return mid;
            }
            else if(nums[mid]>k) hi=mid-1;
            else lo=mid+1;
        }
        return lo;
    }
};

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int k = target;
        int lo = 0;
        int hi = n - 1;
        vector<int> ans(2, -1);

        if (n == 0) return ans; 

        if (n == 1) {
            if (nums[0] == k) {
                ans[0] = 0;
                ans[1] = 0;
            }
            return ans;
        }

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == k) {
                // Find first occurrence
                int first = mid;
                while (first > 0 && nums[first - 1] == k) {
                    first--;
                }
                ans[0] = first;

                // Find last occurrence
                int last = mid;
                while (last < n - 1 && nums[last + 1] == k) {
                    last++;
                }
                ans[1] = last;
                break;
            }
            if (nums[mid] > k) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};
