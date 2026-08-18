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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return NULL;
        ListNode* temp = head;
        // finding middle element
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        int mid = cnt / 2;
        cnt = 0;
        ListNode* prev = NULL;
        // Deleting the value
        while (cnt < mid) {
            cnt++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};