#include <stdio.h>
#include <iostream>
#include <limits>
class Solution {
public:
    int reverse(int x) {
        int min = numeric_limits<int>::min();
        int max = numeric_limits<int>::max();
        int r = 0;  // This will store the reversed number

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check for overflow/underflow before updating r
            if (r > (max / 10) || (r == max / 10 && digit > max % 10)) {
                return 0;  // Overflow
            }
            if (r < (min / 10) || (r == min / 10 && digit < min % 10)) {
                return 0;  // Underflow
            }

            // Safe to update r
            r = r * 10 + digit;
        }

        return r;
    }
};
