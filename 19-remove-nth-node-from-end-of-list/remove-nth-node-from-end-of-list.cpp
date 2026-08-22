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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        if (cnt == n)
            return head->next;
        temp = head;
        int target = 0;
        
        while (temp->next != NULL) {
           
            if (cnt - n - 1 == target) {
                ListNode* cur = temp;
                temp = temp->next;
                ListNode* nextper = temp->next;
                cur->next = nextper;
                temp->next = NULL;

            } else {
                target++;
                temp = temp->next;
            }
        }

        return head;
    }
};