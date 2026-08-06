/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *temp, *nextnode;

    while(head != NULL && head->val == val)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    if(head == NULL)
    {
        return NULL;
    }

    temp = head;


    while(temp->next != NULL)
    {
        if(temp->next->val == val)
        {
            nextnode = temp->next;
            temp->next = nextnode->next;
            free(nextnode);
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}