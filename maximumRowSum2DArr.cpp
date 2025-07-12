#include <iostream>
#include <climits>
using namespace std;

int maxRowSum(int arr[][2],int row,int col){
    int maxValue = INT_MIN;
    
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        maxValue = max(maxValue, sum);
    }

    return maxValue;
}

int maxColumnSum(int arr[][2], int row, int col) {
    int maxValue = INT_MIN;

    for (int j = 0; j < col; j++) {
        int sum = 0;
        for (int i = 0; i < row; i++) {
            sum += arr[i][j];  // Sum all elements in column j
        }
        maxValue = max(maxValue, sum);  // Track maximum column sum
    }

    return maxValue;
}

int main(){
    int arr[4][2] = {{1,2},{3,4},{5,6},{1,2}};
    cout << maxRowSum(arr,4,2) << endl;
    return 0;
}