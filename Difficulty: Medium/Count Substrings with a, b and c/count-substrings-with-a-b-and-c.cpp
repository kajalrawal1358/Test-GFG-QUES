class Solution {
public:
    int countSubstring(string &s) {
        int n = s.size();
        int lastA = -1, lastB = -1, lastC = -1;
        int ans = 0;

        for(int i = 0; i < n; i++) {

            if(s[i] == 'a')
                lastA = i;
            else if(s[i] == 'b')
                lastB = i;
            else if(s[i] == 'c')
                lastC = i;

            int minimum = min(lastA, min(lastB, lastC));

            if(minimum != -1)
                ans += minimum + 1;
        }

        return ans;
    }
};