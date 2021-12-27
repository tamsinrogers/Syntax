/**
 * cstk.h
 *Basic strucutre of the stack 
 * Rayna Hata 
 * 10/7
 */

#ifndef cstk_h
#define cstk_h
#include <stdio.h>
#include <stdlib.h>


extern int CSTK_MAX;

typedef struct stack { //structure of the stack 
	int* stack;
	int top;
} Stack;

 

Stack *stk_create(int); //creates a stack with the size specified by the int value
void stk_destroy (Stack*); //recycles a stack
void stk_push(Stack*, int);//adds a new value to the top of the stack
int stk_pop(Stack*);//removes a value from the top of the stack
void stk_display(Stack*, int); //prints out the list in the reverse order if the int value is 1, otherwise, prints out in the original order
	


#endif