class Solution {
public:
    int countOccurence(vector<int>& arr, int k) {
        map<int, int> mp;

        for(int x : arr) {
            mp[x]++;
        }

        int count = 0;
        int n = arr.size();

        for(auto it : mp) {
            if(it.second > n / k) {
                count++;
            }
        }

        return count;
    }
};