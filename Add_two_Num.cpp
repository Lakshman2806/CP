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
   ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // Lists contain the digits in reverse order
        int carry = 0;
        ListNode *ans = new ListNode();
        ListNode *temp = ans;

        ListNode *p = l1;
        ListNode *q = l2;

        while(p!= NULL || q!=NULL)
        {
            int x = (p!=NULL)? p->val : 0;
            int y = (q!=NULL)? q->val : 0;

            int sum = x + y + carry;
            carry = sum/10;
            temp -> next = new ListNode(sum%10);
            temp = temp->next;
            if(p!=NULL) p = p->next;
            if(q!=NULL) q = q->next;
        }
        if(carry>0)
        {
            temp->next = new ListNode(carry);
        }
        if(ans->val==0)
        {
            ans = ans->next;
        }
        return ans;
    }
};
