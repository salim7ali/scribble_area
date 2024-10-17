#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &islandMatrix){
    if(islandMatrix[i][j] != 1) //empty or visited previously
        return;

    islandMatrix[i][j] = 2;     // marked as visited

    vector<pair<int, int>> relativeNeighPositions = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    int currentNeighbourRow, currentNeighbourCol;
    for(int neighIndex=0; neighIndex<4; neighIndex++){
        currentNeighbourRow = i + relativeNeighPositions[neighIndex].first;
        currentNeighbourCol = j + relativeNeighPositions[neighIndex].second;

        if(isValidPosition(currentNeighbourRow, currentNeighbourCol) == false)
            continue;
        
        dfs(currentNeighbourRow, currentNeighbourCol, islandMatrix);
    }

    
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
            if(islandMatrix[i][j] == 1){
                islandCount += 1;
                dfs(i, j, islandMatrix);
            }
        }
    }

    cout<<islandCount;
    
}