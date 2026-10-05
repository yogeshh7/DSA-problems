class Solution {
public:
    // optimal soln -> hashing 
    int subarraySum(vector<int>& nums, int k) {
        int  n = nums.size();
        int currSum = 0;
        int count  =0;
        unordered_map<int,int>prefix;
        prefix[0] = 1;
        for(int num : nums){
            currSum += num;


            if(prefix.find(currSum - k) != prefix.end()){
                count += prefix[currSum - k];
            }
             prefix[currSum]++;
        }
     return count;

    }
};

        // //  subarray continous part h arr ka,, arr ke  bich,bich mein se nhi 
        // // //  BRUTE FORCE 
        // int  count = 0;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum += nums[j];
        //         if(sum == k){
        //             count++;
        //         }
        //     }
        // }
        // return count;