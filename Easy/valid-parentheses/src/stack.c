#include "stack.h"
#include <stdlib.h>
#include <stdbool.h>

struct node_t {
    char c;
    node_t* next;
};

bool isEmpty(Stack* top){
    if(top == NULL) return false;

    if(*top == NULL) return true;
    
    return false;
}

Stack* create_stack(){
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    
    if(stack != NULL) *stack = NULL;
    
    return stack;
}

void destroy_stack(Stack* top){
    if(top != NULL){

        node_t* node;

        while(*top != NULL){
            node = *top;
        
            *top = (*top)->next;
        
            free(node);
        }
    }
}


bool push(Stack* top, char c){
    if(top == NULL) return false;

    node_t* node = (node_t*) malloc(sizeof(node_t));

    if(node == NULL) return false;

    node->c = c;

    node->next = *top;

    *top = node;

    return true;
}

char pop(Stack* top){
    if(isEmpty(top)) return '\0';

    node_t* node = *top;

    char c = node->c;

    *top = node->next;

    free(node);

    return c;
}