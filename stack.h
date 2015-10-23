#ifndef __STACK_H__
#define __STACK_H__
#include <stdbool.h>

//define error message
#define STACKFULL	-1
#define OK			0


typedef struct {
	int top;
	int size;
	int *contains;
}stack_t;

int  push(stack_t *, int *);
int * pop(stack_t *);
bool isFull(stack_t *);
bool isEmpty(stack_t *);
void clear(stack_t *);
#endif
