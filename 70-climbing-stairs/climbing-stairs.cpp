class Solution {
public:
    int climbStairs(int n) {
        int current = 1;
        int previous = 1;
        for(int i=1; i<n; i++){
            int next = current + previous ;
            previous = current;
            current = next;

        }
        return current;
    }
};

// recursion
        // if(n==0) return 0;
        // if(n==1) return 1;
        // // 2 stairs to climb agr 1ka jump fir 1 ka jump ek way aur sidha 2 ka jump ek way to total 2 ways hogyi
        // if(n==2) return 2;
        // // agr n=5 h to ye 5 ko 4 aur 3 mein todega fir 4 ko 3 aur 2 mein aur fir 3 ko 2 aur 1 mein aur hume 1 aur 2 ka to pta hi h 
        // //               5
        // //         4           3
        // //       3     2   2     1

        // return climbStairs(n-1) +  climbStairs(n-2);