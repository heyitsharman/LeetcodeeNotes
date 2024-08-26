#include <stdio.h>
#include <iostream>
#include <algorithm> 
#include <cctype> 
#include <string>
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0){
            return false;
        }
        string a;
        for(char b:s){
            if(isalpha(b)||isalnum(b)){
                a+=tolower(b);
            }
        }
        string c=a;
        reverse(c.begin(),c.end());
        return a==c;
    }
};