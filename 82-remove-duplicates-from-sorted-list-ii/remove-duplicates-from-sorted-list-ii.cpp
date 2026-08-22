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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int> mp;
        if (head == NULL)
            return head;
        ListNode* temp = head;

        while (temp) {
            mp[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        ListNode dummy(0);
        ListNode* ans = &dummy;
        while (temp != NULL) {
            if (mp[temp->val] == 1) {
                ans->next = temp;
                ans = ans->next;
            }
            temp = temp->next;
        }
        ans->next = nullptr;

        return dummy.next;
    }
};