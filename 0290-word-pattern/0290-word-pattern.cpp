class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.size(), m=s.size();
        map<char,string> mpp1;
        map<string,char> mpp2;
        vector<string> v;
        string temp="";
        for(int i=0;i<m;i++){
            if(s[i]!=' '){
                temp +=s[i];
            }
            if(s[i]==' ' || i==m-1){
                v.push_back(temp);
                temp="";
            }
        }
        int vlen=v.size();
        if(vlen!=n) return false;
        for(int i=0;i<n;i++){
            if(mpp1.find(pattern[i])==mpp1.end() && mpp2.find(v[i])==mpp2.end()){
                mpp1[pattern[i]]=v[i];
                mpp2[v[i]]=pattern[i];
            }else{
                if(mpp1[pattern[i]]!=v[i] || mpp2[v[i]]!=pattern[i]) return false;
            }
        }
        return true;
    }
};