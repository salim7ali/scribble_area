#include <bits/stdc++.h>
using namespace std;

void display2DMatrix(vector<vector<int>> matrix){
    matrix[0][1] = 99;
    for(int r=0; r<matrix.size(); r++){
        for(int c=0; c<matrix[0].size(); c++){
            cout<<matrix[r][c]<<" ";
        }cout<<"\n";
    }cout<<"\n";
}

int main(){
    vector<vector<int>> prevMatrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int N = prevMatrix.size();

    vector<vector<int>> rotatedMatrix(N, vector<int> (N, 0));
    int newRow, newCol;
    for(int r=0; r<prevMatrix.size(); r++){
        for(int c=0; c<prevMatrix[0].size(); c++){
            newRow = N - c - 1;
            newCol = r;
            rotatedMatrix[newRow][newCol] = prevMatrix[r][c];
        }
    }
    display2DMatrix(rotatedMatrix);
    cout<<"Value should remain unchanged due to pass by value "<<rotatedMatrix[0][1];
}