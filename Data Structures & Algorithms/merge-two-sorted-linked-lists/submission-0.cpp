/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void insert_at_tail(ListNode *&head, ListNode *&tail, int val) {
        ListNode *newNode = new ListNode(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = NULL, *tail = NULL;

        while(list1 && list2) {
            int x = list1->val, y = list2->val;
            if(x < y) {
                insert_at_tail(head, tail, x);
                list1 = list1->next;
            }
            else {
                insert_at_tail(head, tail, y);
                list2 = list2->next;
            }
        }
        while(list1) {
            insert_at_tail(head, tail, list1->val);
            list1 = list1->next;
        }

        while(list2) {
            insert_at_tail(head, tail, list2->val);
            list2 = list2->next;
        }

        return head;
    }
};
