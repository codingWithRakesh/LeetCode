#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1 == NULL || list2 == NULL){
        return list1 == NULL ? list2 : list1;
    }
    if(list1->val <= list2->val){
        list1->next = mergeTwoLists(list1->next,list2);
        return list1;
    }else{
        list2->next = mergeTwoLists(list1,list2->next);
        return list2;
    }
}

int main() {
    // Creating first sorted list: 1 -> 2 -> 4
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    // Creating second sorted list: 1 -> 3 -> 4
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    // Merging the two lists
    ListNode* mergedList = mergeTwoLists(list1, list2);

    // Printing the merged list
    ListNode* temp = mergedList;
    cout << "Merged List: ";
    while(temp != NULL){
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}