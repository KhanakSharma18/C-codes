#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CS = 0;
        int MS = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            CS += nums[i];
            MS = max(CS, MS);

            if (CS < 0) {
                CS = 0;
            }
        }

        return MS;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;
    cout << obj.maxSubArray(nums);

    return 0;
}