class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> v;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }

        for (int i = 0; i < v.size(); i += 2) {
            int x = v[i];
            int y = v[i + 1];

            for (int j = 0; j < m; j++) {//rows become 0 
                matrix[x][j] = 0;
            }

            for (int j = 0; j < n; j++) {//col become 0
                matrix[j][y] = 0;
            }
        }
    }
};