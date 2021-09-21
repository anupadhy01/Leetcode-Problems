int binarySearch(vector<int> &nums, int target, bool flag) // true for first, false for last
{
    int s=0, e=nums.size()-1, ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(target>nums[mid]) s=mid+1;
        else if(target<nums[mid]) e=mid-1;
        else { ans=mid; if(flag) e=mid-1; else s=mid+1; }
    }
    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=binarySearch(nums, target, true);
        int l=binarySearch(nums, target, false);
        return {f, l};
    }
};
