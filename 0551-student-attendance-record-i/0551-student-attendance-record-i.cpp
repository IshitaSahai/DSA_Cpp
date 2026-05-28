class Solution {
public:
    bool checkRecord(string s) {
        int n=s.length();
        long long a=0, l=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                l++;
            }else if(s[i]=='A'){
                a++;
            }
            if(s[i]!='L'){
                l=0;
            }
            if(l>=3 || a>=2){
                return false;
            }
        }
        return true;
    }
};