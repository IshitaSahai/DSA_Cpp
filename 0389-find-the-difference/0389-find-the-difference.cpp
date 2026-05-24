class Solution {
public:
    char findTheDifference(string s, string t) {
        int sl=0, n=s.length();
        int tl=0, m=t.length();
        for(int i=0;i<n;i++){
            sl+=s[i];
        }
        for(int i=0;i<m;i++){
            tl+=t[i];
        }
        int diff=tl-sl;
        char c=diff;
        return c;
    }
};