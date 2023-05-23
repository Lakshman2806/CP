/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode* temp = A;
    int N =0;
    while(temp!=NULL)
    {
        N++;
        temp= temp -> next;
    }
    int trv = (N/2) + 1 - B -1;
    if(trv<0)
    {
        return -1;
    }
    else{
        temp = A;
        while(trv--)
        {
            temp = temp -> next;
        }
        return temp->val;
    }
}
