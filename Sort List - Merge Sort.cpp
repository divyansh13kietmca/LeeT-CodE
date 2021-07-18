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
    void frontBackSplit(ListNode* head,ListNode** front, ListNode** back){
        ListNode* fast;
        ListNode* slow;
        slow = head;
        fast = head->next;
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        *front = head;
        *back = slow->next;
        slow->next = NULL;
    }
    ListNode*  sortedMerge(ListNode* front, ListNode* back){
        ListNode* result = NULL;
        
        if(front == NULL)
        {
            return back;
        }
        if(back == NULL)
        {
            return front;
        }
        if(front->val <= back->val)
        {
            result = front;
            result->next = sortedMerge(front->next,back);
        }
        else
        {
            result = back;
            result->next = sortedMerge(front,back->next);
        }
        return result;
            
    }
    void MergeSort(ListNode** head)
    {
        ListNode* front;
        ListNode* back;
        
        if(*head == NULL || (*head)->next == NULL)
        {
            return;
        }
        frontBackSplit(*head,&front,&back);
        MergeSort(&front);
        MergeSort(&back);
        
        *head = sortedMerge(front,back);
     }
        ListNode* sortList(ListNode* head)
        {
            MergeSort(&head);     
            return head;
    }
};
