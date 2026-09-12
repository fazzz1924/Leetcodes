class Solution {
public:
    int prodofdigits(int n){
        if(n==0){
            return 0;
        }
        int prod=1;
        while(n>0){
            prod*=n%10;
            n/=10;
        }
        return prod;

    }

    int smallestNumber(int n, int t) {
        while(true){
            if(prodofdigits(n)%t==0){
                return n;
                }
                n++;
            }
    

        
    }
};