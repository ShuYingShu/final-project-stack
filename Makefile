main:main.o my_stack.o
	gcc main.o my_stack.o -o mainstack
main.o:main.c
	gcc -c main.c
my_stack.o:my_stack.c
	gcc -c my_stack.c

clean:
	rm mainstack *.o