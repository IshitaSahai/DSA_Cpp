class Solution {
public: 
    long long solve(string &s, int i, long long num, bool negative){
        int n=s.length();
        int digit=0;
        if(i==n || !isdigit(s[i])) return num;
        digit=s[i]-'0';
        if(negative && (num>INT_MAX/10 || (num==INT_MAX/10 && digit>7))) return INT_MIN;
        else if(num>INT_MAX/10 || (num==INT_MAX/10 && digit>7))return INT_MAX;
        num=(num*10)+digit;
        return solve(s,i+1,num,negative);
    }
    int myAtoi(string s) {
        // int n=s.length(), prevno=0, finalno=0;
        // bool isneg=false, isread=false, ispositive=false;
        // for(int i=0;i<n;i++){
        //     if(isread==false && isneg==false && ispositive==false && s[i]==' ' || (s[i]=='0' && finalno==0 && isread)){
        //         continue;
        //     }else if(isread==false && isneg==false && ispositive==false && s[i]=='+'){
        //         ispositive=true;
        //     }else if(s[i]=='-' && isneg==false && isread==false && ispositive==false){
        //         isneg=true;
        //     }else if(isdigit(s[i])){
        //         prevno=s[i]-'0';
        //         isread=true;
        //         if(isneg==false && (finalno>INT_MAX/10 || (finalno==INT_MAX/10 && prevno>7))){
        //             return INT_MAX;
        //         }else if(isneg && (finalno>INT_MAX/10 || (finalno==INT_MAX/10 && prevno>7))){
        //             return INT_MIN;
        //         }else{
        //             finalno=(finalno*10)+prevno;
        //         }
        //     }else{
        //         break;
        //     }
        // }
        // if(isneg) finalno*=-1;
        // return finalno;

        // RECURSIVE APPROACH
        int n=s.length();
        int i=0;
        //skip spaces 
        while(i<n && s[i]==' '){
            i++;
        }
        //read sign 
        bool negative=false;
        s=s.substr(i);//will give the substring from i till last
        if(s[0]=='-'){
            negative=true;
        }
        i=(s[0]=='+' || s[0]=='-')?1:0; 
        //skip zeros 
        while(i<n && s[i]=='0'){
            i++;
        }
        // cout<<i<<endl;
        // cout<<s[i]<<endl;
        // cout<<negative<<endl;
        long long num=0;
        num=solve(s,i,num,negative);
        int finalno=0;
        if(negative) finalno=num*-1;
        else finalno=num;
        return finalno;
    }
};