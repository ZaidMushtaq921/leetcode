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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
      unordered_map<int,bool> num_hash;
        ListNode *ans = new ListNode();
        ListNode *temp2 = ans;
        ListNode *temp1 = head;
        for(int i =0;i<nums.size();i++)
        {
            num_hash[nums[i]]=true;
        }
        while(temp1!=NULL)
        {
            if(num_hash.find(temp1->val)==num_hash.end())
            {
                ListNode *newNode = new ListNode(temp1->val);
                temp2->next = newNode;
                temp2=temp2->next;
            }
            
            temp1=temp1->next;
        }
        return ans->next;
    }
};