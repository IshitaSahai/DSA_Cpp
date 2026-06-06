#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string news="";
// int i=0;
    bool isvalid(string &news, int l, int r){
        if(l>=r) return true;
        if(news[l]==news[r]){
            l++; r--;
            return isvalid(news,l,r);
        }
        return false;
    }
    bool isPalindrome(string s) {
    //     string ns="";//new string
    //     for(char c:s){
    //         if(isalnum(c)){
    //             ns+=c;//adding all characters in new string in which empty spaces are removed 
    //             //automatically as only alphanumeric characters are added in the new string
    //         }
    //     }
    //     string fs="";//final string
    //    for(char c:ns){
    //         fs+=tolower(c);//converting all the characters of new string to lowercase and 
    //         //adding it to the final string fs
    //     }
    //     string copy=fs;//copying fs to var copy as changes will be made in fs afterwards while 
    //     //reversing it 
    //     reverse(fs.begin(),fs.end());
    //     if(fs==copy) return true;
    //     else return false;


        // string news="";
        for(char i:s){
            if(isalnum(i)){
                news+=tolower(i);
            }
        }
        int n0=news.length();
        return isvalid(news, 0, n0-1);
    }
};