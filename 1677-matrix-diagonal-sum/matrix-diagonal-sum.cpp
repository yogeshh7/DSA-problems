class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for(int i=0; i<n ; i++){
        // pd : i == j -> (0,0)(1,1)(2,2)
            sum += mat[i][i];
        // sd : j=n-i-1; -> (0,2)(1,1)(2,1)
            int j = n-i-1;
            if(i != j){
                sum += mat[i][j];
            }
        // (1,1) pd mein bhi aur sd mein bhi to common ele add nhi hoga
            }
                return sum;      
    }
};