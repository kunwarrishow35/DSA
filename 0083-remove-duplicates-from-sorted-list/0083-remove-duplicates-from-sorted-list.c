/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp, *nextnode;
    temp = head;

    while(temp!=NULL && temp->next){
        if(temp->val == temp->next->val){
            nextnode = temp->next;
            temp->next = nextnode->next;
            free(nextnode);
        }
        else{
            temp = temp->next;
        }
    }
    return head;
    
}