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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dumhead=new ListNode;
        ListNode *listhead=dumhead;
        
        int carry=0;
        int sum;
        bool flag=true;
        while(l1!=NULL || l2!=NULL)
        {
            if(flag==false)
            {
                listhead->next=new ListNode;
                listhead=listhead->next;
            }
            sum=carry;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            
            listhead->val=(sum%10);
            carry=sum/10;
            flag=false;
        }
        if(carry!=0)
        {
            listhead->next=new ListNode(carry);
        }
        return dumhead;
    }
};