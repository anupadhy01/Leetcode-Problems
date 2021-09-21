class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0, e=n-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            cout<<mid<<endl;
            if(nums[mid]>=nums[0])
            {
                if(target>nums[mid]) s=mid+1;
                else if(target<nums[mid]) { if(target>=nums[0]) e=mid-1; else s=mid+1; }
                else return mid;
            }//left
            else{
                if(target>nums[mid]) { if(target>=nums[0]) e=mid-1; else s=mid+1; }
                else if(target<nums[mid]) e=mid-1;
                else return mid;
            }//right
        }
        return -1;
    }
};
