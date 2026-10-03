// Runtime: N/A
// Memory: N/A

class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0){
            return false;
        }
        long ans =0;
        int rem=0;
        int q;
        q=x;
        while(q!=0){
            rem=q%10;
            ans=ans*10+rem;
            q/=10;
        }
        if(ans==x){
            return true;
        }
        else{
            return false;
        }

    }
};