#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long r=0;
        int temp=x;
        if(x<0){
            return false;
        }
        while(x>0){
             r=r*10+x%10;
            x/=10;
        }
        if (r==temp){
            return true;
        }
        else{
            return false;
        }
    }
};