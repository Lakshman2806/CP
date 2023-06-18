/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 


 
ListNode* Solution::sortList(ListNode* A) {
    if(A == NULL || A->next == NULL)
    {
        return A;
    }
    ListNode* slow = A;
    ListNode* fast = A->next;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* B = slow->next;
    slow->next = NULL;
    A = Solution::sortList(A);
    B = Solution::sortList(B);
    ListNode* head = NULL;
    ListNode* tail = NULL;

    while(A != NULL && B != NULL)
    {
        if(A->val < B->val)
        {
            if(head == NULL)
            {
                head = A;
                tail = A;
            }
            else
            {
                tail->next = A;
                tail = tail->next;
            }
            A = A->next;
        }
        else
        {
            if(head == NULL)
            {
                head = B;
                tail = B;
            }
            else
            {
                tail->next = B;
                tail = tail->next;
            }
            B = B->next;
        }
    }
    if(A != NULL)
    {
        tail->next = A;
    }
    else
    {
        tail->next = B;
    }
    return head;
}
