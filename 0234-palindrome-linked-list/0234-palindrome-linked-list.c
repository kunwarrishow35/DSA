/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow, *fast;
    slow = head;
    fast = head;

    while(fast!=NULL && fast-> next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode *current, *prev, *nextt;
    current = slow;
    prev = NULL;
    while(current != NULL){
        nextt = current->next;
        current->next =prev;
        prev = current;
        current = nextt;
    }
    struct ListNode *temp1, *temp2;
    temp1 = head;
    temp2 = prev;

    while(temp2 != NULL)
    {
    if(temp1->val != temp2->val)
        return false;

    temp1 = temp1->next;
    temp2 = temp2->next;
    }
    return true;
}


