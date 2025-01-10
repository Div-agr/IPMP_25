class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
    string result = "";

    int i = num1.size() - 1; // Pointer for num1
    int j = num2.size() - 1; // Pointer for num2

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0; // Get digit from num1
        int digit2 = (j >= 0) ? num2[j] - '0' : 0; // Get digit from num2

        int sum = digit1 + digit2 + carry; // Add digits and carry
        carry = sum / 10;                  // Update carry
        result += (sum % 10) + '0';        // Append current digit to result

        i--; // Move to the next digit
        j--;
    }

    reverse(result.begin(), result.end()); // Reverse the result string
    return result;
    }
};