class Solution {
public:
    int longestSubseq(vector<int>& arr) {
        unordered_map<int, int> mp;
        int ans = 0;

        for(int x : arr) {
            int prev = max(mp[x - 1], mp[x + 1]);

            mp[x] = prev + 1;

            ans = max(ans, mp[x]);
        }

        return ans;
    }
};