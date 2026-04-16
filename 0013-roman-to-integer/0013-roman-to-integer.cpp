class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int fin=0;
        map<char,int> mpp;
        mpp['M']=1000;
        mpp['D']=500;
        mpp['C']=100;
        mpp['L']=50;
        mpp['X']=10;
        mpp['V']=5;
        mpp['I']=1;
        for(int i=0;i<n;i++){
            if(i!=n-1 && mpp[s[i]]>=mpp[s[i+1]]){
                fin+=mpp[s[i]];
            }else if(i!=n-1){
                fin-=mpp[s[i]];
            }else{
                fin+=mpp[s[i]];
            }
        }
        return fin;
    }
};