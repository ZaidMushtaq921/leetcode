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
    void merge(ListNode* &start,ListNode* &end)
    {
        ListNode * curr=start;
        ListNode* next=start->next;
        while(next!=NULL && end!=NULL)
        {
            if((end->val>=curr->val) &&(end->val<next->val))
            {
                curr->next=end;
                end=end->next;
                curr=curr->next;
                curr->next=next;
            }
            else
            {
                curr=curr->next;
                 next=next->next;
                }
        }
        if(end!=NULL)
        {
            curr->next=end;
        }
        
    }
        
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        if(list1->val<=list2->val)
        {
            merge(list1,list2);
            return list1;
        }
        else
        {
            merge(list2,list1);
            return list2;
        }
        
    }
};