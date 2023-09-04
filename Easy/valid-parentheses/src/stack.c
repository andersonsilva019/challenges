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

char* convert_stack_to_string(Stack* top, int size_of_string){
    if(isEmpty(top)) return NULL;

    char* str = (char*) malloc(size_of_string * sizeof(char) + 1);

    int i = 0;

    while(!isEmpty(top)){
        str[i] = pop(top);
        i++;
    }

    str[i] = '\0';

    return str;
}

int sizeStack(Stack* top){
    if(isEmpty(top)) return 0;

    int size = 0;

    Stack* stack = create_stack();

    while(!isEmpty(top)){
        push(stack, pop(top));
        size++;
    }

    while(!isEmpty(stack)){
        push(top, pop(stack));
    }

    destroy_stack(stack);

    return size;
}