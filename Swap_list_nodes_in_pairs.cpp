/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *ans = new ListNode(0);
    ListNode *temp = ans;
    bool fl = true;
    while (A != NULL)
    {
        if (fl)
        {
            if (A->next != NULL)
            {
                ans->next = new ListNode(A->next->val);
                ans->next->next = new ListNode(A->val);
                ans = ans->next->next;
            }
            else
            {
                ans->next = new ListNode(A->val);
            }
        }
        fl = !fl;
        A = A->next;
    }
    return temp->next;
}
