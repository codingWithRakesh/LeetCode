#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n,-1);
    stack<int>s;

    for(int i = 2*n-1; i >= 0; i--){
        while(s.size() > 0 && nums[s.top()] <= nums[i%n]){
            s.pop();
        }

        ans[i%n] = s.empty() ? -1 : nums[s.top()];
        s.push(i%n);
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = nextGreaterElements(nums);

    cout << "Next Greater Elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}