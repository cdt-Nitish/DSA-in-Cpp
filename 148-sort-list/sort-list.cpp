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

    // 1. Merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {
        
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        while (left!=NULL && right !=NULL) {
            if (left->val < right->val) {
                curr->next = left;
                left = left->next;
            }
            else {
                curr->next = right;
                right =right->next;
            }

            curr = curr->next;
        }

        // attach remaining nodes
        if (left != NULL)
            curr->next = left;
        else
            curr->next = right;

        return dummy->next;
    }


    // 2. Merge Sort
    ListNode* sortList(ListNode* head) {

        // base case
        if (head==NULL || head->next==NULL)
            return head;

        // find middle
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev=NULL;

        while (fast!=NULL && fast->next !=NULL) {
            prev=slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // split into two halves
        prev->next= NULL;
        ListNode* right = slow;
        // slow=slow;
        
        ListNode* leftSorted = sortList(head);
        ListNode* rightSorted = sortList(right);

        // merge
        return merge(leftSorted,rightSorted);
    }
};