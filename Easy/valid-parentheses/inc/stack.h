#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct node_t node_t;

typedef struct node_t* Stack;

Stack* create_stack();

void destroy_stack(Stack* top);

bool push(Stack* top, char c);

char pop(Stack* top);

bool isEmpty(Stack* top);

int sizeStack(Stack* top);

char* convert_stack_to_string(Stack* top, int size_of_string);

#endif