class Solution {
public:
    int myAtoi(string s) {
        int n=s.length(), prevno=0, finalno=0;
        bool isneg=false, isread=false, ispositive=false;
        for(int i=0;i<n;i++){
            if(isread==false && isneg==false && ispositive==false && s[i]==' ' || (s[i]=='0' && finalno==0 && isread)){
                continue;
            }else if(isread==false && isneg==false && ispositive==false && s[i]=='+'){
                ispositive=true;
            }else if(s[i]=='-' && isneg==false && isread==false && ispositive==false){
                isneg=true;
            }else if(isdigit(s[i])){
                prevno=s[i]-'0';
                isread=true;
                if(isneg==false && (finalno>INT_MAX/10 || (finalno==INT_MAX/10 && prevno>7))){
                    return INT_MAX;
                }else if(isneg && (finalno>INT_MAX/10 || (finalno==INT_MAX/10 && prevno>7))){
                    return INT_MIN;
                }else{
                    finalno=(finalno*10)+prevno;
                }
            }else{
                break;
            }
        }
        if(isneg) finalno*=-1;
        return finalno;
    }
};