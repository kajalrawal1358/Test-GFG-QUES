class Solution {
public:
    int totHammingDist(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for(int bit = 0; bit < 32; bit++) {
            int ones = 0;

            for(int x : arr) {
                if(x & (1 << bit)) {
                    ones++;
                }
            }

            int zeros = n - ones;

            ans += ones * zeros;
        }

        return ans;
    }
};