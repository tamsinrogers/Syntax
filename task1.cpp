/*

Identifier naming, variable declaration, scope

Tamsin Rogers, Rayna Hata, & Nicole Matamoros
10/7
g++ -o task1 task1.cpp
./task1

*/

#include <iostream>								// works with cout
using namespace std;

int main() 
{
	
	// declare "five", give it type "int", and value "5"
	int five = 5;
	
	// declare "c", give it type "char", and value "'a"
	char c = 'a';
	
	// case sensitivity: these are two different variables
	char somewords[] = "test array";	
	char someWords[] = "another test array";	
	
	// some more examples
	int some_numbers[] = {1,2,3,4,5};
	string s = "test string";
	
	// these aren't allowed:
	// int int = 9;
	// string #$! = "hi";

    cout << five << "\n";
    cout << c << "\n";
    cout << somewords << "\n";
    cout << someWords << "\n";
    cout << some_numbers << "\n";
    cout << s << "\n";
    
    return 0;
}
