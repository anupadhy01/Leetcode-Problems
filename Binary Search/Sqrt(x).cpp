typedef long long ll;

class Solution {
public:
    int mySqrt(int x) {
        ll s=0, e=x, ans;
        while(s<=e)
        {
            ll mid=(s+e)/2;
            if(x<mid*mid) e=mid-1;
            else if(x>=mid*mid) { ans=mid; s=mid+1; }
        }
        return ans;
    }
};
