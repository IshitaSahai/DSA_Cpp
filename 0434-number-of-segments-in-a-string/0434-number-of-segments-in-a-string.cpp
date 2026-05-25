class Solution {
public:
    int countSegments(string s) {
        int n=s.length();
        int cnt=0, seg=0; bool isal=false;
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                isal=true;
            } 
            if(s[i]!=' '){
                cnt++;
            }
            if(s[i]==' ' && i<n-1 && s[i+1]!=' ' && cnt!=0){
                seg++;
                cnt=0;
            }
        }
        if(isal==false) return 0;
        return seg+1;
    }
};