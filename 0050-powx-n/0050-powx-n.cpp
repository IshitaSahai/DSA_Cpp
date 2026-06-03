class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(n<0) N=-N;
        if(n==0) return 1;
        if(n>0){
            double half=myPow(x,n/2);
            if(n%2==0) return half*half;
            else return x*half*half;
        }else{
            double half=myPow(x,N/2);
            if(N%2==0) return 1/(half*half);
            else return 1/(x*half*half);
        }
    }
};