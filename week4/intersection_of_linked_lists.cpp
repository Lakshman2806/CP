/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* temp1 = A;
        ListNode* temp2 = B;
        int len1 = 0;
        int len2 = 0;
        while(temp1 != NULL){
            len1++;
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            len2++;
            temp2 = temp2->next;
        }
        int diff = abs(len1 - len2);
        temp1 = A;
        temp2 = B;
        if(len1 > len2){
            while(diff--){
                temp1 = temp1->next;
            }
        }
        else{
            while(diff--){
                temp2 = temp2->next;
            }
        }
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
}
