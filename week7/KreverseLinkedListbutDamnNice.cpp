/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* prev = NULL;
    ListNode* curr = A;
    ListNode* next = NULL;
    int count = 0;
    while(curr != NULL && count < B){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        A->next = reverseList(next, B);
    }
    return prev;
}
