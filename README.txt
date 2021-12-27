CS333 - Project #3 - README
Tamsin Rogers
10/7/2021

Directory Layout:
Project3
├── cstk.c
├── cstk.h
├── cstktest
├── cstktest.c
├── exten
├── exten.cpp
├── exten2.cpp
├── task1.cpp
└── task2.cpp

Run and build configuration for C:
macOS Big Sur 11.5.2 - Apple LLVM version 12.0.5 (clang-1205.0.22.11)

Description for each subsection:
C:
  This is the C programming task. 
	cstk.c implemets all of the functions created in the header file (cstk.h). Here, we are creating, destoying, pop, push and displaying the 
  stack. When we are displaying, if the integer is 1, then the stack is displayed in reverse order and if not, then it is displayed in the
  original order. 
	

 			   
  Compile:
	gcc -o cstktest cstktest.c cstk.c
  Run:
	./cstktest


  Output:

  The original list: 0
  1
  2
  3
  4
  5
  6
  7
  8
  9
The reversed list: 9
  8
  7
  6
  5
  4
  3
  2
  1
  0

	
C++:
  This is the description section for C++. 
  
  
  In task 1, we demonstrated the rules for identifier naming, variable declarations and identifier scoping for our language. We tested 
  different types of variables to see what we can store in a variabe. Here is the output below.  

  Compile:
	g++ -o task1 task1.cpp
  Run:
	./task1


  Output:
  5
  a
  test array
  another test array
  0x7ffeeaed48f0
  test string

  For task 2, we created a binary search in C++ on a n array of numbers. 

  Compile:g++ -o task2 task2.cpp
  run: ./task2


  Output
    The array used is: 1 2 3 4 5 6 7 8 9 10 4 is found at index 3
    9 is found at index 8
    5 is found at index 4
    11 is found at is -1. This means it is not in the array.


	For task 3, we wrote a program that demonstrates the basic built-in types,
	aggregating types, and the standard suite of operators.

	  Compile:g++ -o task3 task3.cpp
	  run: ./task3


	  Output
		5
		0x7ffee685c9f4
		true
		3
		cd
		2.2
		3
		1.1
		5
		3.8
		20
		23.75
		0



Extension: 

For my extension, I implemented a stack in C++ and used the pop and push methods and printed out the stack in reverse order. 
The stack had numbers 1~10 placed in it  


Compile: g++ -o exten exten.cpp

Run:./exten

Output:
    1098754321




  