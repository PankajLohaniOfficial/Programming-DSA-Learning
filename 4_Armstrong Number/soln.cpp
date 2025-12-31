// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0;
        int temp = n;
        while (n!=0){
            int last_digit = n%10;
            sum = ( last_digit * last_digit * last_digit ) + sum;
            n = n/10;
        }
        
        if ( sum == temp){
            return true;
        }
        else{
            return false;
        }
        
    }
};