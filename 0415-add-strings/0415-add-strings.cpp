class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        string result = "";
        while (i >= 0 || j >= 0 || carry) {
            int digit1 = 0;
            int digit2 = 0;
            if (i >= 0)
                digit1 = num1[i] - '0';
            if (j >= 0)
                digit2 = num2[j] - '0';
            int sum = digit1 + digit2 + carry;
            result += (sum % 10) + '0';
            carry = sum / 10;
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};