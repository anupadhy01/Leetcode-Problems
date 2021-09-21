class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(), cols=matrix[0].size();
        if(target<matrix[0][0] or target>matrix[rows-1][cols-1]) return false;
        int s=0, e=rows-1, rr;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(target<matrix[mid][cols-1]){ rr=mid; e=mid-1; }
            else if(target>matrix[mid][cols-1]) { s=mid+1; }
            else return true;
        }
        s=0; e=cols-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(target>matrix[rr][mid]) s=mid+1;
            else if(target<matrix[rr][mid]) e=mid-1;
            else return true;
        }
        return false;
    }
};
