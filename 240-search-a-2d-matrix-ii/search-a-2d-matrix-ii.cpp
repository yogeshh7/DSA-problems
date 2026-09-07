class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // sirf ek particular row aur ek particular col sorted h 
        // lowest value is matrix mein (0,0) th cell pe hogi kyuki L to R har row ki val inc aur similar T to B har col ki valuer inc hori h to 
        // shortest value at (0,0) cell ie top left cell , highest value (m-1)(n-1) ie bottom right cell
        int m = matrix.size(); // rows 
        int n  = matrix[0].size(); //cols
         
        int r = 0; // first row
        int c = n-1; //last col
        while  (r < m && c >= 0){
        int mid = matrix[r][c]; // mid ke andr matrix[0][4] mid -> 15
        if(mid == target){
            return true;
        } else if (mid >= target){
            c--;
        }
        // target >= mid
        else{
            r++;
        }
        }
        return false;
    }
};