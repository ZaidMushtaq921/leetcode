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
    void insertnode(ListNode* &head,ListNode* &tail,int val)
    {
        if(head==NULL)
        {
          ListNode*  newnode = new ListNode(val);
            head=tail=newnode;
        }
        else
        {
             ListNode*  newnode = new ListNode(val);
            tail->next=newnode;
            tail=newnode;
        }   
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = NULL;
        ListNode * tail = NULL;
        int carry = 0;
        while(l1!=NULL && l2!=NULL)
        {
            int a = l1->val;
            int b = l2->val;
            int sum = a+b + carry;
              insertnode(head,tail,sum%10);
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
        }

         while(l1!=NULL )
        {
            int a = l1->val;
           
            int sum = a+carry;
              insertnode(head,tail,sum%10);
            carry=sum/10;
            l1=l1->next;
        } 
        while( l2!=NULL)
        {
            
            int b = l2->val;
            int sum = b + carry;
              insertnode(head,tail,sum%10);
            carry=sum/10;
            l2=l2->next;
        }
        if(carry!=0)
        {
            insertnode(head,tail,carry);
        }        
        return head;
          
    }
};