class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1)
            return s;

        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < s.length(); i++) {

            // Check for odd length palindrome
            int left = i;
            int right = i;

            while (left >= 0 && right < s.length() && s[left] == s[right]) {

                int currentLength = right - left + 1;

                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    start = left;
                }

                left--;
                right++;
            }

            // Check for even length palindrome
            left = i;
            right = i + 1;

            while (left >= 0 && right < s.length() && s[left] == s[right]) {

                int currentLength = right - left + 1;

                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    start = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLength);
    }
};