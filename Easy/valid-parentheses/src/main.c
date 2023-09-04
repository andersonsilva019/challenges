#include "stack.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool isValid(Stack* stack, char* s){
    int i = 0;
   
    while(s[i] != '\0'){

        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
             push(stack, s[i]);
        }else{
            if(*stack == NULL) return false;

            char c = pop(stack);

            if(s[i] == ')' && c != '(') return false;

            if(s[i] == ']' && c != '[') return false;
            
            if(s[i] == '}' && c != '{') return false;
        }
        i++;
    }

    if(isEmpty(stack)) return true;
    else return false;
}


int main(){

    char str[] = "((([])))";

    Stack* stack = create_stack();

    if(isValid(stack, str)) printf("Valid\n");
    else printf("Invalid\n");

    destroy_stack(stack);

    return 0;
}