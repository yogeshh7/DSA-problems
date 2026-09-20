class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          int n = nums.size();
          sort(nums.begin() , nums.end());
          vector<vector<int>> ans;

        for(int i=0; i<n; i++){
                if(i > 0 && nums[i] == nums[i-1]){continue;}
            for(int j=i+1; j<n;){
                int k=j+1 , l = n-1;
                while(k < l){
                    long long sum =(long long)nums[i] + (long long)nums[j]
                                     + (long long)nums[k] + (long long)nums[l];

                    if(sum > target){
                        l--;
                    }else if (sum < target){
                        k++;
                    }else{
                        
                        ans.push_back( {nums[i] , nums[j] , nums[k] , nums[l]} );
                       
                        k++ , l--;
                        while(k < l && nums[k] == nums[k-1]){k++;}
                       
                    }
                }
                    j++;
                while( j < n && nums[j] == nums[j-1]){j++;}
            }
        }
        return ans;
    }
};
    // self thought (Test case pass but TLE )
    //     int n = nums.size();
    //     set<vector<int>>seen;
    //     vector<vector<int>>ans;

    //     for(int i=0; i<n; i++){
    //         for(int j=i+1; j<n; j++){
    //             for(int k=j+1; k<n; k++){
    //                 for(int l=k+1; l<n; l++){
    //                     if(nums[i] + nums[j]+ nums[k] + nums[l] == target){
    //                         if( seen.find ( {nums[i] , nums[j], nums[k] , nums[l]} ) == seen.end() ){
    //                             seen.insert({nums[i] , nums[j], nums[k] , nums[l]});
    //                             ans.push_back({nums[i] , nums[j], nums[k] , nums[l]});
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //     return ans;