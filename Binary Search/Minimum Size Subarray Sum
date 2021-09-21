#define INF (1<<29)

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int curr=0, s=0, res=INF;
        for(int i=0; i<n; i++)
        {
            curr+=nums[i];
            while(curr>=target)
            {
                res=min(res, i-s+1);
                curr-=nums[s];
                s++;
            }
        }
        if(res==INF) return 0;
        return res;
    }
};
