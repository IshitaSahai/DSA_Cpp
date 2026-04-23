#include <algorithm>
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        // for(int i=0;i<=rowIndex;i++){
        //     v.push_back(fact(rowIndex)/(fact(rowIndex-i)*fact(i)));
        // }
        long long val = 1; 
        for(int i=0;i<=rowIndex;i++){
            v.push_back(val);
            val = val * (rowIndex - i) / (i + 1);
        }
        return v;
    }
    // int fact(int n){
    //     if(n==0) return 1;
    //     return fact(n-1)*n;
    // }
};