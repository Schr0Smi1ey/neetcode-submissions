class NumMatrix {
public:
    vector<vector<int>> arr;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        arr.resize(n, vector<int> (m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                arr[i][j] = matrix[i][j];
            }
        }

        // prefix sum
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                arr[i][j] += ((i - 1) >= 0 ? arr[i - 1][j] : 0) + ((j - 1) >= 0 ? arr[i][j - 1] : 0) - ((i - 1) >= 0 && (j - 1) >= 0 ? arr[i - 1][j - 1] : 0);
           }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        return arr[r2][c2] - ((r1 - 1) >= 0 ? arr[r1 - 1][c2] : 0) - ((c1 - 1) >= 0 ? arr[r2][c1 - 1] : 0) + ((r1 - 1) >= 0 && (c1 - 1) >= 0 ? arr[r1 - 1][c1 -1] : 0); 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */