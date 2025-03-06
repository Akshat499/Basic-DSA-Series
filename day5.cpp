class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children) return -1; 

        money -= children; 
        int count = money / 7, remainder = money % 7;

        if (count >= children) {
            if(count==children && remainder==0) return count;
            else return children-1;
        }

        if (count == children && remainder == 0) return count; 
        
        if (count == children - 1 && remainder == 3) return count - 1; 
        
        return count;
    }
};
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> arr(52, 0);  // 26 for uppercase + 26 for lowercase

        // Count frequency of each character
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                arr[s[i] - 'A']++;  // Uppercase stored in first 26 indices
            } else {
                arr[s[i] - 'a' + 26]++;  // Lowercase stored in next 26 indices
            }
        }

        int count = 0;
        bool oddFound = false;

        // Calculate palindrome length
        for (int i = 0; i < 52; i++) {
            if (arr[i] % 2 == 0) {
                count += arr[i];  // Add even counts fully
            } else {
                count += arr[i] - 1;  // Add the largest even part
                oddFound = true;      // Mark that an odd number exists
            }
        }

        // If there was any odd count, one odd character can be in the center
        if (oddFound) {
            count += 1;
        }

        return count;
    }
};


