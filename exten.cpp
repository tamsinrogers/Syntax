/**
 * C++ extension
 * Creating an array and printing it in reverse 
 * Rayna Hata, Tamsin Rogers, Nicole Matamoros
 * 10/7
 * g++ -o exten exten.cpp
 * ./exten
 */

#include <iostream>
#include <stack>
using namespace std;

int main() {
    
  	stack<int> stack; 					//creating a stack of integers
    stack.push(1); 						//pushing intergers into the stack 
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);

    
    
    while(stack.empty()==false){ 		//checking if the stack is empty yet 
 
        cout << stack.top(); 			//getting the interger at the top of the stack
        stack.pop(); 					//popping that integer off 
    }
    
    
    return 0;
    
    
}