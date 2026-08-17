class Solution {
public:
    string multiplyBy11(string& num) {

        int n = num.size();
        string ans = "";
        int carry = 0;

        for(int i = n - 1; i >= 0; i--) {

            int digit = num[i] - '0';

            int product = digit * 11 + carry;

            ans += char((product % 10) + '0');

            carry = product / 10;
        }

        // Add remaining carry
        while(carry > 0) {
            ans += char((carry % 10) + '0');
            carry /= 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};