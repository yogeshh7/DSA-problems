class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target, int n , int midRow){
        //binary search
        int st = 0;
        int e = n-1; // ab ek specif row mein h target to uske andar search  n-1 -> last col
        while(st <= e){
            int mid = st + (e - st)/2;
            if(matrix[midRow][mid] == target){
                return true;
            }else if(target >= matrix[midRow][mid]){
                st = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // row size
        int n = matrix[0].size(); // col size
        // pheli baat to sorted h 
        // sbse phele nonoverlapping row find krke uske upr vapas se bs krenge
        int start = 0;
        int end = m-1;
        while(start <= end){
            int midRow = start +(end - start)/2;
            if(target >=matrix[midRow][0] && target <=matrix[midRow][n-1]){
            return searchInRow(matrix , target,n, midRow);
            }else if(target >= matrix[midRow][n-1]){
                start = midRow +1;
            }
            else{
                end = midRow -1;
            }
        }
    
    return false;
    }
};