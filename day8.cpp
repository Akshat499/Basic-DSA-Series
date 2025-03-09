class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int m=0;
        for (int i=0;i<n;i++) {
            if(nums[i]!=0) {
                nums[m++]=nums[i];
            }
        }
        for (int i=m;i<n;i++) {
            nums[m++]=0;
        }
    }
};

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
        

    }
};
