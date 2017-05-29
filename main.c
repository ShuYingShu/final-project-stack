#include <stdio.h>

#include "include/my_stack.h"



int main(void) {
	int x;	
    Sqstack s1;
    Sqstack *s=&s1;
	stack_create(s);
	printf("stack's capacity is %d\n",stack_capacity(s));
        while ( ! stack_is_full(s) ) {
		printf("input your number:");
		scanf("%d", &x);
		stack_push(x,s);
	}
	

	while ( !stack_is_empty(s) ) {
		x = stack_pop(s);

		printf("%d\t", x);
	}
	printf("\n");

	
	printf("stack's available size is %d\n",stack_size(s));
	return 0;
}
