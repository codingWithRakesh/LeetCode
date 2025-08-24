#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

int main(){
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    vector<int>arr;

    ListNode* temp = head;
    while(temp != nullptr){
        arr.push_back(temp->val);
        temp = temp->next;
    }

    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
            }
        }
    }
    // sort(arr.begin(),arr.end());

    cout << endl;

    ListNode* temp2 = head;
    for(int i : arr){
        temp2->val = i;
        temp2 = temp2->next;
    }

    ListNode* temp3 = head;
    while(temp3 != nullptr){
        cout << temp3->val << " ";
        temp3 = temp3->next;
    }
    cout << endl;
    return 0;
}