#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &islandMatrix, int &islandCount){

}

int main(){
    vector<vector<int>> islandMatrix = {
        {0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {0, 0, 1, 0, 1},
        {0, 1, 0, 1, 1},
        {0, 1, 0, 1, 0},
    };

    int islandCount=0;

    for(int i=0; i<islandMatrix.size(); i++){
        for(int j=0; j<islandMatrix[0].size(); j++){
            dfs(i, j, islandMatrix, islandCount);
        }
    }
    
}