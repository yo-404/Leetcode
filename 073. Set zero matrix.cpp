//73. Set Matrix Zeroes
// dont using dummy row and column method 
//not the optimal approach

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        set<int>cols;
        set <int> rows;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rows.count(i) || cols.count(j)){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};