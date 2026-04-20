class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int maxdist=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]){
                    maxdist=max(maxdist,abs(i-j));
                }
            }
        }
        return maxdist;
    }
};