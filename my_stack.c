/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include "include/my_stack.h"
#include <stdlib.h>
#include <stdio.h>
#define INIT_SIZE 5


void stack_create(Sqstack *s){
	
	s->base=(int *)malloc(INIT_SIZE*sizeof(int));
	s->top=s->base;
	s->stacksize=INIT_SIZE;
	
}

void stack_push(int x,Sqstack *s){
	if(s->top-s->base>=s->stacksize)
		printf("stack if full!");
	else{
		*(s->top)=x;
		s->top++;
	}
}
	
int stack_pop(Sqstack *s){
	int x;
	if(s->top==s->base){
		printf("stack is empty!");
		return 0;
	}
	else{
		s->top--;
		x=*(s->top);
		return x;
	}
}

// The capacity of the stack
int stack_capacity(Sqstack *s){
	return s->stacksize;
}

// Current available size of the stack
int stack_size(Sqstack *s){
	int x;
	x=s->stacksize-(s->top-s->base);
	return x;
}


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(Sqstack *s){
	if(s->top==s->base)
		return 1;
	else return 0;
}

int stack_is_full(Sqstack *s){
	if(s->top-s->base>=s->stacksize)
		return 1;
	else return 0;
}


