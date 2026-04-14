class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int> mpp;
        vector<pair<char,int>> v;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(auto &it:mpp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),[&](pair<char,int> &a,pair<char,int> &b){
            if(a.second!=b.second){
                return a.second>b.second;
            }
            return a.first<b.first;
        });
        string f="";
        for(auto &it:v){
            int el=it.first;
            int freq=it.second;
            while(freq--){
                f+=it.first;
            }
        }
        return f;
    }
};