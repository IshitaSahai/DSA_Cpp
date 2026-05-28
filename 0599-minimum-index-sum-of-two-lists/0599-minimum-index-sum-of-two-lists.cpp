class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n=list1.size(), m=list2.size();
        int mini=INT_MAX;
        vector<string> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(list1[i]==list2[j]){
                    if((i+j)<mini){
                        mini=(i+j);
                        v.clear();
                        v.push_back(list1[i]);
                    }else if((i+j)==mini){
                        v.push_back(list1[i]);
                    }
                }
            }
        }
        return v;
    }
};