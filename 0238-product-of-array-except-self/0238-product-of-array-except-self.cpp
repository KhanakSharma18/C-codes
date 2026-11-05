class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]*nums[i];
        }

        vector<int> suffix(n);
        suffix[n-1]=nums[n-1];
        for(int j=n-2;j>=0;j--){
            suffix[j] = suffix[j+1]*nums[j];
        }

        for(int k = 0; k < n; k++) {
    int left, right;

    if(k == 0)
        left = 1;
    else
        left = prefix[k-1];

    if(k == n-1)
        right = 1;
    else
        right = suffix[k+1];

    ans[k] = left * right;
}

    return ans;
       
    }
    
    
};