class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int start=0,i=0, cnt=0;
        while(cnt<=n){
            if(s[i]==' ' || i==n){
                reverse(s.begin()+start,s.begin()+(i));
                start=i+1;
            }
            i++;
            cnt++;
        }
        return s;
    }
};