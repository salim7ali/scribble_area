#include <bits/stdc++.h>
// https://www.youtube.com/watch?v=Z0R2u6gd3GU

using namespace std;

void displayMatrix(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }cout<<"\n";
    }cout<<"\n";    
}

void reverseRowsOfMatrix(vector<vector<int>> &matrix){
    int SIZE = matrix.size(); 
    int mid = (SIZE/2)-1;

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<=mid; j++){
            swap(matrix[i][j], matrix[i][SIZE-j-1]);
        }
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int SIZE=matrix.size();

    // transpose matrix
    for(int r=1; r<SIZE; r++){
        for(int c=0; c<r; c++){
            swap(matrix[r][c], matrix[c][r]);
        }
    }

    cout<<"Matrix Transposed:\n";
    displayMatrix(matrix);

    reverseRowsOfMatrix(matrix);
    displayMatrix(matrix);

}