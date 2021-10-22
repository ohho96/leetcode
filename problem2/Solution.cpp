#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
    bool validNum(ListNode* l){
        int val = *l.val;
        return (val > 10 || val < 0);
    }

    ListNode* arr2list(int* [100] arr){
        int i = 1;
        ListNode* ln = new ListNode(arr[0]);
        while(arr[i] != NULL){
            ListNode lt = new ListNode(arr[i]));
            ln = ln->next;
            i++;
        }
        return ln;
    }

    int* list2arr(ListNode* ln){
        static int arr[100];
        ListNode* l0 = ln;
        int i = 0;
        while(l0->next->val == NULL){
            arr[i] = l0->val;
            l0 = l0->next;
            i++;
        }
        return arr;
    }
};

int main(void) {

}