#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    
}

int main(){
    vector<int> arr1 = {2, 1};
    vector<int> arr2 = {3, 5, 5};
    vector<int> arr3 = {0, 3, 2, 1};

    cout << validMountainArray(arr1) << endl; // false
    cout << validMountainArray(arr2) << endl; // false
    cout << validMountainArray(arr3) << endl; // true

    return 0;
}