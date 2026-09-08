class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(); // row size
        int n = matrix[0].size(); // col size
        vector<int>ans;

        int startRow = 0;
        int endRow = m-1;
        int startCol = 0;
        int endCol = n-1;
        // agr strow = endrow to 2 baar print hojayega 
        // same agr stcol == endcol ke 2 baar print hojayega right boundary bhi left bon bhi isliye break;
        while(endCol>= startCol && endRow >= startRow){

        // top boundary , row[0] fixed
        for(int i=startCol; i<=endCol; i++){
           ans.push_back(matrix[startRow][i]);
        }
        //right boundary , endcol(n-1) fixed h
        for(int j=startRow+1; j<=endRow; j++){
            ans.push_back(matrix[j][endCol]);
        }
        //bottom boundary , endRow fixed hoga
        for(int i=endCol-1; i>=startCol; i--){
        if(startRow == endRow){break ;}
            ans.push_back(matrix[endRow][i]);
        }
        //left boundary , startCol fixed
        for(int j=endRow-1; j>= startRow+1; j--){
        if(startCol == endCol){break ;}
            ans.push_back(matrix[j][startCol]);
        }

        startRow++ ; endRow-- ; endCol-- ; startCol++;
        }
        return ans;
    }

};