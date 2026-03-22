class Solution {
public:
    void rotation(vector<vector<int>>& mat){
        int n = mat.size();
        vector<vector<int>>result(n,vector<int>(n));
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                result[j][n-1-i] = mat[i][j];
            }
        }
        mat = result;

     
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(mat == target) return true;
             rotation(mat);
        }
        return false;
       
    }
};