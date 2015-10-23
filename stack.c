#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

bool createStack(stack_t *stack,int stackSize){
	stack->top = -1;
	stack->size = stackSize;
	stack->contains = (int *)calloc(stackSize, sizeof(int *));
}

bool isEmpty(stack_t *stack){
	if(stack->top < 0)
		return true;
	else
		return false;
}

bool isFull(stack_t *stack){
	if(stack->top == stack->size-1)
		return true;
	else
		return false;
}

int  push(stack_t *stack, int *element){
	if(isFull(stack))
		return STACKFULL;
	stack->top++;
	stack->contains[stack->top] = element;
	return OK;		
}

int * pop(stack_t *stack){
	if(isEmpty(stack))
		return NULL;
	int *temp;
	temp = (int*)stack->contains[stack->top];
	stack->top--;
	return temp;
}

void clear(stack_t *stack){
	stack->top=-1;
	free(stack->contains);
}

