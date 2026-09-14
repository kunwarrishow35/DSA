#include <stdbool.h>
#include <string.h>

bool backspaceCompare(char* s, char* t) {

    char stack1[205];
    char stack2[205];

    int top1 = -1;
    int top2 = -1;

    // Process first string
    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i] != '#') {
            stack1[++top1] = s[i];
        }
        else if(top1 >= 0) {
            top1--;
        }
    }

    // Process second string
    for(int i = 0; t[i] != '\0'; i++) {

        if(t[i] != '#') {
            stack2[++top2] = t[i];
        }
        else if(top2 >= 0) {
            top2--;
        }
    }

    // Different lengths means different strings
    if(top1 != top2)
        return false;

    // Compare stacks
    for(int i = 0; i <= top1; i++) {

        if(stack1[i] != stack2[i])
            return false;
    }

    return true;
}