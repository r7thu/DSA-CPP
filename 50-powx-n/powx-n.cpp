class Solution {
public:
    double myPow(double x, int n) {
        //Good Solution
        //We check for 2 Conditions
        // Negative No.
        // Power is Odd/Even
        double ans=1; // To store Fractional Values
        long long no=n; // as to Solve INT_MIN*-1 problem
        if(no<0){
            no=no*-1;
        }
        while(no){
            if(no%2==0){ //Even Case
                no=no/2;
                x=x*x;
            }
                ans=ans*x; //Odd Case we dont need to put else 
                no--;      //as it goes in order
        }
        if(n<0){
            ans=1/ans;
        }
        return ans;
    }
};