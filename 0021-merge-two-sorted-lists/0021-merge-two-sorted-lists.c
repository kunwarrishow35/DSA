/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head1, *head2, *newhead, *newtail, *temp, *newnode;
    newhead = newtail = NULL;
    head1 = list1;
    head2 = list2;

    while(head1 != NULL && head2 != NULL){
        if(head1->val <= head2->val){
            newnode = head1;
            head1 = head1->next;
        }
        else{
            newnode = head2;
            head2 = head2->next;
        }
        if(newhead == NULL){
            newhead = newtail = newnode;
        }
        else{
            newtail -> next = newnode;
            newtail = newnode;
        }
    }

    if (newtail == NULL) {
        return (head1 != NULL) ? head1 : head2;
    }

    if(head1 != NULL){
        newtail->next = head1;
    }
    else{
        newtail->next = head2;
    }
    return newhead;



}