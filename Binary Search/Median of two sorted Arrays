#define INF (1<<29)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sz1=nums1.size(), sz2=nums2.size();
        if(sz1>sz2) return findMedianSortedArrays(nums2, nums1);
        int n=(sz1+sz2+1)/2;
        int s=0, e=sz1;
        while(s<=e)
        {
            int ele1=(s+e)/2;
            int ele2=n-ele1;
            
            int L1=(ele1==0) ? -INF : nums1[ele1-1];
            int R1=(ele1==sz1) ? INF : nums1[ele1];
            
            int L2=(ele2==0) ? -INF : nums2[ele2-1];
            int R2=(ele2==sz2) ? INF : nums2[ele2];
            
            if(L1<=R2 and L2<=R1) { if((sz1+sz2)&1) return max(L1, L2); else return (max(L1, L2)+min(R1, R2))/2.0; }
            else if(L1>R2) { e=ele1-1; }
            else if(L2>R1) { s=ele1+1; }
        }
        return -1;
    }
};


