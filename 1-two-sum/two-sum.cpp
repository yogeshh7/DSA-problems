class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // // O(n) Approach using unorderdmap
    // int n = nums.size();
    // unorderd_map<int , int> seenNumbers(n) ;
    // int first = seenNumbers[0];
    // int reqConp = target - first;
    // // .find on map agr val milti h to uska i deta h vrna m.end(), agr val milti h to hi chlegi conditin 
    // if(seenNumbers.find(reqConp)) != seenNumbers.end(){
    //     return {seenNumbers[resComp] , i}

    // }

//         // O(n^2) Approach
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 if(nums[i] + nums[j] == target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// O(nlogn approach)
    int n = nums.size();
    vector<pair<int, int>> sorted_arr(n);
    // sorted_arr mein pairs honge jaise 0 index mein pair{3,0} 1st pe {2,1},2nd pe {4,2} - > original index honge .second pe ,,fir sort ke baad 0 index pe {2,1}, 1st index pe {3,0}, 3rd index pe {4,2} 2<3<4 sort hojayega par uska og index uske sath hi rahega 
    for (int i = 0; i < n; ++i) {
        sorted_arr[i] = {nums[i], i};
    }
    sort(sorted_arr.begin(), sorted_arr.end());
    
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        int current_sum = sorted_arr[left].first + sorted_arr[right].first;
        
        if (current_sum == target) {
            
            return {sorted_arr[left].second, sorted_arr[right].second};
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    return {}; 
}
};

 