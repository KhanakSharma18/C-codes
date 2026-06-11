#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix product
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Suffix product
        int suffix = 1;
        for (int j = n - 2; j >= 0; j--) {
            suffix *= nums[j + 1];
            ans[j] *= suffix;
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};

    Solution obj;
    vector<int> result = obj.productExceptSelf(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}