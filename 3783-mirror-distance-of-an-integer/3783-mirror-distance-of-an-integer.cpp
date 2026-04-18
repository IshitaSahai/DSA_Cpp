class Solution {
public:
    int mirrorDistance(int n) {
        int num=n, digit=0, rn=0;
        while(num>0){
            digit=num%10;
            num/=10;
            rn=(rn*10)+digit;
        }
        return abs(n-rn);
    }
};