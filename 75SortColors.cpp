#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortColors(vector<int>& nums) {
    sort(nums.begin(),nums.end());
}

void sortColors2(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n - 1; i++){
        bool isSwap = false;
        for(int j = 0; j < n - i - 1; j++){
            if(nums[j] > nums[j + 1]){
                swap(nums[j],nums[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

int main(){
    vector<int>nums = {2,0,2,1,1,0};
    sortColors(nums);

    for(int i : nums){
        cout << i << " ";
    }
}