class Solution {
public:
    int maxSweetness(vector<int> &sweetness, int k) {
        int n = sweetness.size();

        int low = 0;
        int high = 0;

        for(int x : sweetness) {
            high += x;
        }

        int ans = 0;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            int pieces = 0;
            int sum = 0;

            for(int i = 0; i < n; i++) {
                sum += sweetness[i];

                if(sum >= mid) {
                    pieces++;
                    sum = 0;
                }
            }

            if(pieces >= k + 1) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};