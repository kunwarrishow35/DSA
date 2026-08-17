/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *temp1, *temp2;
    temp1 = headA;
    temp2 = headB;
    int count1 = 0;
    int count2 = 0;
    while(temp1 != NULL){
        count1++;
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        count2++;
        temp2 = temp2->next;
    }
    int skip = abs(count1 - count2);
    temp1 = headA;
    temp2 = headB;
    if(count1 > count2){
        while(skip--){
            temp1 = temp1->next;
        }
    }
    else{
        while(skip--){
            temp2 = temp2->next;
        }
    }
    while(temp1 !=  temp2){
        temp1 = temp1->next;
        temp2= temp2->next;
    }
    return temp1;

    
}