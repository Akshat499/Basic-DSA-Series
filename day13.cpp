class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1;

        while (lo < hi) { 
            int mid = lo + (hi - lo) / 2;
            
            if (nums[mid] > nums[hi]) {
                
                lo = mid + 1;
            } else {
                
                hi = mid;
            }
        }
        
        return nums[lo]; 
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;
        
        // Find the pivot where the array is rotated
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return mid;
            
            // Check if the left half is sorted
            if (nums[lo] <= nums[mid]) {
                // Target is within the left sorted half
                if (nums[lo] <= target && target < nums[mid]) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            } 
            // The right half must be sorted
            else {
                // Target is within the right sorted half
                if (nums[mid] < target && target <= nums[hi]) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        }
        
        // If no target is found, return -1
        return -1;
    }
};

pair<int, int> getFloorAndCeil(vector<int> &nums, int n, int x) {
	pair<int,int> y;
	y.first=-1;
	y.second=-1;
if(x<nums[0]) {
	y.first=-1;
	y.second= nums[0];
	return y;
}
if(x>nums[n-1]) {
	y.first=nums[n-1];
	y.second=-1;
	return y;
}

	int lo=0,hi=n-1;
	while(lo<=hi) {
		int mid = lo + (hi-lo)/2;
		if(nums[mid] == x) {
			 y.first=nums[mid];
			 y.second= nums[mid];
			return y;
		}
		else if(nums[mid]>x) hi=mid-1;
		else lo= mid+1;
	}
	
	y.first= nums[hi];
	y.second= nums[hi+1];
	return y;

}
