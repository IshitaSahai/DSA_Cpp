class Solution {
public:
    int findLUSlength(string a, string b) {
        int n=a.length(), m=b.length();
        if(a==b) return -1;
        else{
            if(n>=m) return n;
            else return m;
        }
    }
};