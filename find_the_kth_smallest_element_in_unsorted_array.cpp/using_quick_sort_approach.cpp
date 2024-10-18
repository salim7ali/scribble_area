// https://www.geeksforgeeks.org/kth-smallest-largest-element-in-unsorted-array/
#include<bits/stdc++.h>
using namespace std;


int quickSort(int arr[], int l, int r, int k){
    int p = l-1;
    int runner = p+1;

    while(runner<r){
        if(arr[runner] < arr[r]){
            p++;
            swap(arr[p], arr[runner]);
        }else{
            runner++;
        }
    }

    swap(arr[p+1], arr[r]);
    int currentFixedNumber = p+2;

    if(k==currentFixedNumber)
        return arr[p+1];
    else if(k<currentFixedNumber){
        quickSort(arr, l, p, k);
    }else{
        quickSort(arr, p+2, r, k);
    }
}

int main(){
    int array[] = {7, 10, 4, 3, 20, 15};
    int arrSize = sizeof(array)/sizeof(array[0]);

    int k = 2;
    cout<< quickSort(array, 0, arrSize-1, k);
    
    
     
}