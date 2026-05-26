class Solution {
public:
    string convertToBase7(int num) {
        int rem=0, sn=0, cnt=0;
        int n=abs(num);
        string s="", temps="";
        while(n>0){
            rem=n%7;
            n/=7;
            temps+=to_string(rem);
        }
        if(num==0){
            return "0";
        }else if(num>0){
            reverse(temps.begin(),temps.end());
            s=temps;
        }else{
            temps+="-";
            reverse(temps.begin(),temps.end());
            s=temps;
        }
        return s;
    }
};