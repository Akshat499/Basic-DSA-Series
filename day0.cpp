class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =nums.size();
        vector<int> nums2(2*n,0);
        for (int i=0;i<n;i++) {
            nums2[i]=nums[i];
            nums2[n+i]=nums[i];
            }
        return nums2;
    }
};


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int x=0;
        int y=0;
        while(i<j) {
            if (nums[i]==nums[j]) return true;
            else{
                j--;
            }
        }
        i=0;
        j=n-1;
        while(i<j) {
            if (nums[i]==nums[j]) return true;
            else{
                i++;
            }
        }
        return false;
    }
};
