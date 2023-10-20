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
    void insertstart(ListNode* &head,int val)
    {
        if(head==NULL)
        {
            ListNode * newnode = new ListNode(val);
            head=newnode;
        }
        else{
         ListNode * newnode = new ListNode(val);
        newnode->next = head;
        head= newnode;
        }
    }
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
if(head==NULL)
    return head;
        if(head->next==NULL&&head->val==0)
            return head;
        stack<int> s;
        while(curr!=NULL)
        {
            s.push(curr->val);
            curr=curr->next;
        }
       int carry=0;
        ListNode* newhead=NULL; 
        while(!s.empty())
        {
            int sum = (s.top()*2)+carry;
            int rem = sum%10;
            insertstart(newhead,rem);
            carry=sum/10;
            s.pop();
        }
        if(carry!=0)
        {
                        insertstart(newhead,carry);

        }
        
        return newhead;
    }
};