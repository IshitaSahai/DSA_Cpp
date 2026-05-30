class Solution {
public:
    bool isHappy(int n) {
        long long d=0,sqnum=0;
        unordered_map<int,int> mpp;
        while(n>=0){
            d=n%10;
            n/=10;
            sqnum+=d*d;
            if(n==0 && sqnum==1) return true;
            if(n==0){
                if(mpp.find(sqnum)==mpp.end()){
                    n=sqnum;
                    mpp[sqnum]=1;
                }else return false;
                sqnum=0;
            }
        }
        return false;
    }
};