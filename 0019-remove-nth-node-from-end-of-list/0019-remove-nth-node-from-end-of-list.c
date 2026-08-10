/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *slow, *fast, *nextnode;
    slow = head;
    fast = head;
    for(int i = 1; i<=n; i++){
        fast = fast->next;
    }
    if(fast==NULL){
        nextnode = head;
        head = head->next;
        free(nextnode);

        return head;
    }
    while(fast->next != NULL){
        fast= fast->next;
        slow= slow->next;
    }
    nextnode = slow->next;
    slow->next = nextnode->next;
    free(nextnode);

    return head;     
}