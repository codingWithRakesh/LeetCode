#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // Only need to copy nums2 if anything left
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

void forChecking(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    nums1.resize(m);
    nums2.resize(n);
    nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    sort(nums1.begin(),nums1.end());
    for(int x: nums1){
        cout<<x;
    }
}

int main(){
    vector<int>nums1 = {1,2,3,0,0,0};
    int m = 3;

    vector<int>nums2 = {2,5,6};
    int n = 3;

    merge(nums1,m,nums2,n);

    for(int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << " ";
    }

    return 0;
}

