class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal = {{1},
                                      {1,1}};
        
        for(int i = 2; i <= rowIndex; i++){
            //the length of ith row is i+1
            vector<int> row(i+1, 1);
            
            for(int j = 1; j < i+1-1; j++){
                row[j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
            
            pascal.push_back(row);
        }
        
        return pascal[rowIndex];
    }
};