class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(), carry=0;
        vector<int> num;
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]+=1;
                return digits;
            }else{
                carry=1;
                while(i>=0){
                    if(digits[i]==9 && carry==1){
                        num.push_back(0);
                    }else{
                        num.push_back(digits[i]+carry);
                        carry=0;
                    }
                    i--;
                }
                if(i>=0){
                    num.push_back(digits[i]);
                }else if(digits[i+1]==9 && carry==1){
                    num.push_back(1);
                }
            }
        }
        reverse(num.begin(),num.end());
        return num;
    }
};