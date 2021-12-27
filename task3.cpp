/*

Built-in types

Tamsin Rogers, Rayna Hata, & Nicole Matamoros
10/7
g++ -o task3 task3.cpp
./task3

*/

#include <iostream>								// works with cout
using namespace std;

class MyClass
{

	public:
	int number;
};

int main() 
{

	MyClass obj;
	obj.number = 5;
	
	cout << obj.number << "\n";

	// void type
	void *p;
	int *pointer;
	int i;
	p = &i;
	pointer = (int *)p;
	cout << pointer << "\n";
	
	// bool type
	bool status = true;
	if(status == true)
	{
		cout << "true" << "\n";
	}
	
	// character type
	char char1 = 'a';
	unsigned char char2 = 'b';
	
	// float type
	float float1 = 5.5;
	double float2 = 400.4;
	long double float3 = 100000000.1111;
	
	// int type
	int five = 5;
	unsigned int three = 3;
	signed int int1 = -1;
	short int2 = 10;
	long int3 = 1000;
	long long int4 = 10000000000000000;
	
	// + works for ints, strings, floats
	int a = 1;
	int b = 2;
	int sum = a + b;
	cout << sum << "\n";
	
	string c = "c";
	string d = "d";
	string sum1 = c + d;
	cout << sum1 << "\n";
	
	float g = 1.1;
	float h = 2.2;
	float sum2 = h + i;
	cout << sum2 << "\n";
	
	// - works for ints, floats
	int e = 5;
	int f = 2;
	int diff = e - f;
	cout << diff << "\n";
	
	float j = 1.1;
	float k = 2.2;
	float diff2 = k - j;
	cout << diff2 << "\n";
	
	// / works for ints, floats
	int l = 10;
	int m = 2;
	int div = l / m;
	cout << div << "\n";
	
	float n = 9.5;
	float o = 2.5;
	float div2 = n / o;
	cout << div2 << "\n";
	
	// * works for ints, floats
	int x = 10;
	int y = 2;
	int mult = x * y;
	cout << mult << "\n";
	
	float r = 9.5;
	float s = 2.5;
	float mult2 = r * s;
	cout << mult2 << "\n";
	
	// % works for ints
	int t = 10;
	int u = 2;
	int mod = t % u;
	cout << mod << "\n";
	
    
    return 0;
}
