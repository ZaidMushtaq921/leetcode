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
    private:
    ListNode * getmiddle(ListNode * head)
    {
        ListNode * slow=head;
        ListNode * fast = head->next;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
     ListNode * reverse(ListNode *  head2)
    {
        ListNode * prev=NULL;
        ListNode * next= NULL;
        ListNode * curr = head2;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
         return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
    
        if(head->next==NULL)
            return true;
        ListNode * middle = getmiddle(head);
         ListNode * temp=middle->next;
         middle->next=reverse(temp);
        ListNode * head2=middle->next;
        while(head2!=NULL )
        {
            if(head->val!=head2->val)
                return false;
            head=head->next;
             head2=head2->next;

        }
        
        return true;
    }
};