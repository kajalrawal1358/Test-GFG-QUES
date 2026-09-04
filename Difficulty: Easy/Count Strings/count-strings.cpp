class Solution {
public:
    long long countStr(int n) {
        long long ans = 0;

        // 0 b, 0 c
        ans += 1;

        // 1 b
        ans += n;

        // 1 c
        ans += n;

        // 2 c
        if(n >= 2)
            ans += (long long)n * (n - 1) / 2;

        // 1 b and 1 c
        if(n >= 2)
            ans += (long long)n * (n - 1);

        // 1 b and 2 c
        if(n >= 3)
            ans += (long long)n * (n - 1) * (n - 2) / 2;

        return ans;
    }
};