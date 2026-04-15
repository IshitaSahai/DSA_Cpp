class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        if(n==0) return 0;
        int maxd=INT_MIN, cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else if(s[i]==')') cnt--;
            maxd=max(maxd,cnt);
        }
        return maxd;
    }
};