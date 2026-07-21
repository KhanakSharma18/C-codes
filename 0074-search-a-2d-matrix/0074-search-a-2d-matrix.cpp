class Solution {
public:

    bool search(vector<vector<int>>& matrix,int target,int row){
        int n = matrix[0].size();
        int st=0, end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            else if (matrix[row][mid]>target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
         
        }
           return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int st=0, end = m-1;
        while(st<=end){
            int mid = st+(end - st)/2;
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target){
                return search(matrix,target,mid);
            }
            else if(matrix[mid][n-1]<target){
                st = mid+1;
            }
            else if(matrix[mid][n-1]>target){
                end = mid -1;
            }
        }
        return false;
    }
};