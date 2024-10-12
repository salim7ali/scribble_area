#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int halfSize, MATRIX_SIZE;
        MATRIX_SIZE = matrix.size();
        if(matrix.size()%2 == 0){   // even length
            halfSize = (matrix.size()/2)-1;
        }else{                      // odd length
            halfSize = matrix.size()/2;     // take floor
        }

        int bufferR, bufferC, bufferValue;
        int cornerRow, cornerCol;
        int cornerNewRow, cornerNewCol;

        // Assuming square matrix
        for(int r=0; r<=halfSize; r++){
            for(int c=0; c<=halfSize; c++){
                // buffer the row, rol and value which will be overwritten due to current position's 4 corner transform
                bufferR = MATRIX_SIZE - c - 1;
                bufferC = r;
                bufferValue = matrix[bufferR][bufferC]; 

                cornerRow = r;
                cornerCol = c;
                for(int i=0; i<4; i++){     // 4 corresponding corners of matrix based on current position 
                    cornerNewRow = MATRIX_SIZE - cornerCol - 1;
                    cornerNewCol = cornerRow;

                    matrix[cornerNewRow][cornerNewCol] = matrix[cornerRow][cornerCol];

                    int tempCornerRow = cornerRow;
                    cornerRow = cornerCol;
                    cornerCol = MATRIX_SIZE - tempCornerRow -1; 
                }
            }
        }

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                cout<<matrix[i][j]<<" ";
            }cout<<"\n";
        }
    }
};

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Solution obj;
    obj.rotate(matrix);
}