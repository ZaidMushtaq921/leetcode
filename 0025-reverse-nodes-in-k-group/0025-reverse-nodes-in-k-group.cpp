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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
         ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
        ListNode * curr = head;
        ListNode * prev = NULL; 
        ListNode * forw = head;
        int count = 0;
        while(count<k && forw != NULL)
        {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
            count++;
        }
        if(curr!=NULL){
        head->next = reverseKGroup(forw,k);
        }
        return prev;
        }
};