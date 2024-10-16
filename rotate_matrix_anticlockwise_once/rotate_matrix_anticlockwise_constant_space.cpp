// https://www.youtube.com/watch?v=Z0R2u6gd3GU
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int MATRIX_SIZE = matrix.size();

        // matrix transposed 
        for(int i=1; i<MATRIX_SIZE; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        int mid = (MATRIX_SIZE/2)-1;    // works both for odd length and even length
        // reverse matrix
        for(int i=0; i<=mid; i++){
            for(int j=0; j<MATRIX_SIZE; j++){
                swap(matrix[i][j], matrix[MATRIX_SIZE-i-1][j]);
            }
        }

        this->displayMatrix(matrix);
    }

    void displayMatrix(vector<vector<int>> matrix){
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size();j++){
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