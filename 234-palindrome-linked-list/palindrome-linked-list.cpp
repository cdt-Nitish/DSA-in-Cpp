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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL) {
            cnt++;
            temp=temp->next;
            }
        int mid=(cnt+1)/2;
        ListNode* curr=head;
        for(int i=0;i<mid;i++){
            curr=curr->next;
        }

        ListNode* prev = nullptr;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode* left = head;
        ListNode* right = prev; 

        while (right != nullptr) {
            if (left->val != right->val) {
                return false;
            }
            left = left->next;
            right = right->next;
        }

        return true;
    }
};