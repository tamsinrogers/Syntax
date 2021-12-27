/**
 * cstk.c 
 * Implemeting the header fucntions to create, destory, pop, push, and display 
 * Tamsin Rogers
 * 10/7
 */

#include "cstk.h"
#include <stdio.h>
#include <stdlib.h>


int CSTK_MAX = 50; //the maximum length of the stack 


Stack *stk_create(int a){
    //creates a stack with the size specified by the int value
    Stack *ptr= (Stack*)malloc(sizeof(Stack)); 
    ptr-> stack= (int*)malloc(sizeof(int)*a);
    ptr-> top=-1;
    return ptr;
   
} 


void stk_destroy (Stack* stk){
    //recycles a stack
    free(stk-> stack);
    free(stk);

}
void stk_push(Stack* stk, int a){
    //adds a new value to the top of the stack
    
    stk-> top++; //incrementing the size of the stack
    stk-> stack[stk->top]=a; //putting the interger a into the new spot 
    

}

int stk_pop(Stack* stk){ 
    //removes a value from the top of the stack
    int a= stk->stack[stk->top];
    stk -> top--; //decrementing the size of the stack 
    return a;  //returning the value
}

void stk_display(Stack* stk, int c){
    //prints out the list in the reverse order if the int value is 1, otherwise, prints out in the original order
    if(c==1){
        for(int i=stk->top;i>=0;i--){
            printf<<("%d",stk->stack[i]);
        }   
    }
    else{
         for(int i=0;i<=stk->top;i++){
            printf("%d",stk->stack[i]);
        } 

    }


}