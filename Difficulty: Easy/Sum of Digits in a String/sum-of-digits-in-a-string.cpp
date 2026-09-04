class Solution {
public:
    string arrangeString(string &s) {
        string letters = "";
        int sum = 0;

        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                sum += s[i] - '0';
            }
            else {
                letters += s[i];
            }
        }

        sort(letters.begin(), letters.end());

        if(sum > 0) {
            letters += to_string(sum);
        }

        return letters;
    }
};