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
        ListNode *curr, *front, *del;
        curr = new ListNode(0);
        curr->next = head;
        del = curr;
        front = curr;
        for(int i = 1; i <= n+1; i++)
        {
            front = front->next;
        }
        while(front != NULL)
        {
            front = front->next;
            del = del->next;
        }
        del->next = del->next->next;
        return curr->next;
        
    }
};
