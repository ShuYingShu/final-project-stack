#ifndef _MY_STACK_H
#define _MY_STACK_H

typedef struct{
	int *base;
	int *top;
	int stacksize;
}Sqstack;

void stack_create(Sqstack *s);
void stack_push(int x,Sqstack *s);
int stack_pop(Sqstack *s);

// The capacity of the stack
int stack_capacity(Sqstack *s);

// Current available size of the stack
int stack_size(Sqstack *s);


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(Sqstack *s);
int stack_is_full(Sqstack *s);




#endif //_MY_STACK_H
