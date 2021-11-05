#include <iostream>
using namespace std;


//Definition for singly-linked list.
/* struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; */

//invlid solution because causing signed integer oveflow on large number
/* class Solution {
public:
    ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x1 = 0;
        int x2 = 0;
        int temp = 1;
        int sum;

        while(l1 != NULL){
            x1 += temp*l1->val;
            temp *= 10;
            l1 = l1->next;
        }

        temp = 1;
        while(l2 != NULL){
            x2 += temp*l2->val;
            temp *= 10;
            l2 = l2->next;
        }

        sum = x1 + x2;
        ListNode * head = new ListNode();
        ListNode * tNode = head; 
        if(sum == 0){
            tNode->val = 0;
        }
        else {
            while(sum > 0){
                tNode->val = sum %10;
                if(sum/10 != 0){
                    tNode->next = new ListNode();
                    tNode = tNode->next;
                }
                sum /= 10;
            }
        }
        return head;
    }
}; */

class Solution {
public:
    ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = nullptr;
        ListNode * temp = nullptr;

        int carry = 0;

        while(l1 != nullptr || l2 != nullptr){
            int sum = carry;

            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }

            ListNode * node = new ListNode(sum % 10);

            carry = sum /10;

            if (temp == nullptr){
                temp = head = node;
            }
            else{
                temp->next = node;
                temp = temp->next;
            }
        }

        if(carry > 0){
            temp->next = new ListNode(carry);
        }
        return head;
    }
};