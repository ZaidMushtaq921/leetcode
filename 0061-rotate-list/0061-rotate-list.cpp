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
    ListNode* rotateRight(ListNode* head, int k) {
            
     ListNode* curr = head;
        if(head==NULL || head->next== NULL)
            return head;
        
        int size=1;
        while(curr->next!=NULL)
        {
            size++;
            curr=curr->next;
        }
//         tail found
        ListNode* tail = curr;
        int actualrotation=k%size;
if( actualrotation==0)
            return head;
        curr=head;
        int pos= size-actualrotation;
        int x=0;
        while(x<pos-1)
        {
            curr=curr->next;
            x++;
        }
        ListNode* newhead= curr->next;
        tail->next=head;
        curr->next=NULL;
        
        return newhead;
    }
};