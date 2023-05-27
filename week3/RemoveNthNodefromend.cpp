/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int N =0;
    ListNode* temp = A;
    while(temp!=NULL)
    {
        N++;
        temp = temp -> next;
    }
    int trv = N - B -1;
    temp = A;
    if(trv < 0)
    {
        return A->next;
    }
    while(trv--)
    {
        temp = temp->next;
    }
    ListNode * del = temp->next;
    if(del==NULL)
    {
        temp->next = NULL;
    }
    else{
    temp->next = temp->next->next;
    }
    free(del);
    return A;
}
