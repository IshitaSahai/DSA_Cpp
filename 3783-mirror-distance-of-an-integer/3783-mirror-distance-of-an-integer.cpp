class Solution {
public:
    int reverse(int n){
        int num=n, digit=0, rn=0;
        while(num>0){
            digit=num%10;
            num/=10;
            rn=(rn*10)+digit;
        }
        return rn;
    }
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};