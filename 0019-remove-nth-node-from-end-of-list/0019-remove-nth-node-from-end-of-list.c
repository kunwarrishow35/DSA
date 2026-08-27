/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *temp, *nextnode;
    temp = head;
    int count = 0;
    while(temp != NULL){
        count ++;
        temp = temp->next;
    }
    temp = head;
    if(n == count){
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int pos = (count - n);
    for(int i =1; i<pos; i++){
        temp = temp->next;
    }


    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    return head;
}