/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode *x = new ListNode(0);
    ListNode *y = x;
    // return NULL;
    int carry = 0;
    while ((A != NULL) || (B != NULL))
    {
        int xl = A == NULL ? 0 : A->val;
        int yl = B == NULL ? 0 : B->val;
        ListNode *temp = new ListNode((xl + yl + carry) % 10);
        carry = (xl + yl + carry) / 10;
        x->next = temp;
        x = x->next;
        if (A != NULL)
            A = A->next;
        if (B != NULL)
            B = B->next;
    }
    // return NULL;
    if (carry)
    {
        ListNode *temp = new ListNode(carry);
        x->next = temp;
        x = x->next;
    }
    return y->next;
}
