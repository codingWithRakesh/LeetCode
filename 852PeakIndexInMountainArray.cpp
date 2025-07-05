#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int peakIndexInAMountainArray(vector<int>& arr){
    int max = INT_MIN;
    int index;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main(){
    vector<int>arr = {0,1,0};
    vector<int>arr2 = {0,1,2,0};

    cout << peakIndexInAMountainArray(arr) << endl;
    cout << peakIndexInAMountainArray(arr2) << endl;
    return 0;
}