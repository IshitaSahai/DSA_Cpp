class Solution {
public:
    const long long mod=1e9+7;
    long long power(int x, long long n){
        // long long mod=1e9+7;
        if(n==0) return 1;
        long long half=power(x,n/2);
        if(n%2==0) return (half*half)%mod;
        return (x*(half*half)%mod)%mod;  
    }
    int countGoodNumbers(long long n) {
        long long evenplacesinstr=0;
        if(n%2) evenplacesinstr=(n/2+1);
        else evenplacesinstr=(n/2);
        long long oddplacesinstr=(n/2);
        return ((power(5,evenplacesinstr)%mod)*(power(4,oddplacesinstr)%mod)%mod);
    }
};