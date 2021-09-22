class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int s=0, e=arr.size()-1;
        if(e==0) return 0;
        if(arr[0]>arr[1]) return 0;
        if(arr[e]>arr[e-1]) return e;
        s++; e--;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1]) s=mid+1;
            else e=mid-1;
        }
        return -1;
    }
};
