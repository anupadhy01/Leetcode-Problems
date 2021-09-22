class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=1, e=nums.size()-1, res=nums[0];
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(s!=0 and nums[mid]<nums[mid-1]) return min(res, nums[mid]);
            if(nums[mid]>=nums[0]) s=mid+1;
            else e=mid-1;
        }
        return res;
    }
};
