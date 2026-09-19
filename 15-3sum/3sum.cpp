class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i =0; i<n; i++){
            // agr i ki value same h to vo iteration skip kro
            if(i>0 && nums[i] == nums[i-1]){continue ;}
            // j hojayega i se next bada aur  k las val ie sbse bdi val kyuki sort
            int j=i+1, k=n-1;
            while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0){
                // sum 0 se bada h yani positive to k biggest val h uss se choti pe jao taki sum chota hoye
                k--;
            }else if(sum < 0)
            // sum chota h 0 se to negative value h to j incremenet jis se sum negative se badeke 0 ki taraf jayega
            j++;
            else{
                // sum = 0 milgya
                // mtlb current i ,j, k pe h == 0 to ans mein dalo
                ans.push_back( {nums[i] , nums[j] , nums[k]} );
                // ans mein dalne ke baad jo current ieration pe sum mila h uss se aage chlo ie j ko -- aur k++ kyuki iss iteration ka sum milgya h
                j++ , k--;
                // jb tak j pe repeated val h(while) to tb tk j++ jb tk j ki koi new val nhi ati
                while(j < k && nums[j] == nums[j-1]) {j++;}
            }
            }
        }
        return ans;
    }
};


// //  brutr force approach O(n^3)
// int n = nums.size();
// set<vector <int>> s;
// vector<vector<int>>ans;
// for(int i=0; i<n; i++){
//     for(int j=i+1; j<n; j++){
//         for(int k=j+1; k<n; k++){
//             if (nums[i] + nums[j] + nums[k] == 0){
//                 vector <int> trip = {nums[i] , nums [j] , nums[k]};
//                 sort(trip.begin() , trip.end());
            
//             if (s.find(trip) == s.end()){
//                 s.insert(trip);
//                 ans.push_back(trip);
//             }
//             }
//         }
//     }
// }
//     return ans;



