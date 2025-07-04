#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n = arr.size();
    if(n < 3){
        return false;
    }
    bool isCheck = false;
    for(int i = 0; i < n -2; i++){
        if(arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2]){
            isCheck = true;
        }else if(arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2]){
            isCheck = true;
        }else{
            isCheck = false;
        }
    }
    if(isCheck){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<int> arr1 = {2, 1};
    vector<int> arr2 = {3, 5, 5};
    vector<int> arr3 = {0, 3, 2, 1};
    vector<int> arr4 = {2,0,2};
    vector<int> arr5 = {9,8,7,6,5,4,3,2,1,0};

    cout << validMountainArray(arr1) << endl; // false
    cout << validMountainArray(arr2) << endl; // false
    cout << validMountainArray(arr3) << endl; // true
    cout << validMountainArray(arr4) << endl; // false
    cout << validMountainArray(arr5) << endl; // false

    return 0;
}