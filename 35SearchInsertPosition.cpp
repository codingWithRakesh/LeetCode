#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& arr, int target) {
    int st = 0, end = arr.size() -1;
    int mid;
    while(st <= end){
        mid = st + (end - st) /2;
        if(target > arr[mid]){
            st = mid + 1;
        }else if(target < arr[mid]){
            end = mid - 1;
        }else if(target == arr[mid]){
            return mid;
        }
    }
    if(target < arr[mid]){
        return mid;
    }else{
        return mid + 1;
    }
    // return end + 1;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;
    vector<int> nums2 = {1,3,5,6};
    int target2 = 2;
    vector<int> nums3 = {1,3,5,6};
    int target3 = 0;

    cout << searchInsert(nums,target) << endl; //2
    cout << searchInsert(nums2,target2) << endl; //1
    cout << searchInsert(nums3, target3) << endl; //4
    return 0;
}
