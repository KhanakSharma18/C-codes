class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int j = 0;
for (int i = 0; i < g.size() && j < s.size(); i++) {
    while (j < s.size()) {
        if (s[j] >= g[i]) {
            ans++;
            j++;
            break;      // Go to next i
        }
        j++;
    }
}
        return ans;
    }
};