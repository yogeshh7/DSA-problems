class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeatedVal;
        int missingVal;
        int expectedSum = 0;
        int actualSum = 0 ;
        // unorderd set se bhi ho skta h unorderd map se bhi , map mein index aur val ka key val pair bnalo, aur har ek ele ka count rkho agr count>1 h current i ka to vo repeating h vrna count 0 h to missing h
        unordered_set<int>seen;
        //  seen aise numbers jo ek bar dekh liye set -> seen
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                actualSum += grid[i][j];
                if(seen.find( grid[i][j] ) != seen.end() ){ 
                    // is current i pe set ke andar vali value current grid se match mtlb set ke andar jo phele se value h vo milgyi vapas to mtlb jo current value hogi vo repeat kar rhi h
                    repeatedVal = grid[i][j];
                }
                // grid ko tranverse krke har value jo set mein nhi h usko set mein dalo
                // har ek value phele check hogi ki vo seen h  ya nhi agr seen h to duplicate vrna seen nhi h to usse seen mein dalo for future vals
                seen.insert(grid[i][j]);
            }
        }
        // NUMBERS 1 SE N^2 TAK H AUR EXPECTED SUM 1 TO N ka HOTA H N(N+1)/2 
        // TO FOR N^2 EXPECTED SUM HOGA n^2(n^2+1)/2
        expectedSum = (n*n) * ((n*n)+1)/2;
        // to n  yha pe 2 h  to 4x5/2 =20/2 = 10 h humara expected sum
        // expectedsum = actualsum only when we remove the duplicate and add the missing val
        // expectedsum = actualsum - duplicate + missing tbhi ye dono = honge
        // hume nikalna h missing to 
        missingVal  = expectedSum + repeatedVal - actualSum;

        return {repeatedVal ,  missingVal};
    }
};