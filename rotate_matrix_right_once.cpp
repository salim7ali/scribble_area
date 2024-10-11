#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<vector<int>> rotatedMatrix(n, vector<int> (n, 0));

    int newR, newC;
    for(int r=0; r<matrix.size(); r++){
        for(int c=0; c<matrix[0].size(); c++){
            newR = c;
            newC = n-r-1;
            rotatedMatrix[newR][newC] = matrix[r][c];
        }
    }
}