class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            int s=nums[i]+nums[j];
            if(target>s) i++;
            else if(target<s) j--;
            else return {i+1, j+1};
        }
        return {-1, -1};
    }
};
