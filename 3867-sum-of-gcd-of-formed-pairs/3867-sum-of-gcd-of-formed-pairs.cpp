class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefix(nums.size());
        int mx = nums[0];
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i]){
                mx = nums[i];
            }
            prefix[i]= gcd(nums[i],mx);
        }
        sort(prefix.begin(),prefix.end());
        long long ans = 0;

        int l = 0, r = nums.size() - 1;

        while (l < r) {
            ans += gcd(prefix[l], prefix[r]);
            l++;
            r--;
        }

        return ans;
    }
};