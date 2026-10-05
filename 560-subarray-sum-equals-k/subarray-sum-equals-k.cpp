class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {













        //  subarray continous part h arr ka,, arr ke  bich,bich mein se nhi 
        // //  BRUTE FORCE 
        int  count = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;

    }
};
