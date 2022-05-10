//Given an m x n matrix, return all elements of the matrix in spiral order.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int n = matrix.size(), m=matrix[0].size(), r=0, c=0, ct=m*n;
        while(ct>0){
            for(int i=c; i<m&& ct>0; i++){
                v.push_back(matrix[r][i]);
                ct--;
            }
            r++;
            for(int i=r; i<n&& ct>0; i++){
                v.push_back(matrix[i][m-1]);
                ct--;
            }
            m--;
            for(int i=m-1; i>=c&& ct>0; i--){
                v.push_back(matrix[n-1][i]);
                ct--;
            }
            n--;
            for(int i=n-1; i>=r&& ct>0; i--){
                v.push_back(matrix[i][c]);
                ct--;
            }
            c++;;
        }
        return v;
    }
};