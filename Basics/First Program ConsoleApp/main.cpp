// single line comment
/*
multi-line comment
*/
#include <iostream>
#include "math.h"
using namespace std;
// function prototype or declaration
void generic_display();

int main()
{
	generic_display();
	cout << "Please enter your name: " << endl;
	char name[128];
	cin.getline(name, 64, '\n');
	cout << "Please enter your Country: " << endl;
	string country;
	cin >> country;
	cout << endl << "Please enter your age: " << endl;
	int age;
	cin >> age;
	cout << "Hello " << name << " from " << country
		<< ". Your age is (I know it is inappropriate to ask and tell someone's age but well): " 
		<< age << endl;
	cout << endl << 
		"What operation do you want to perform. 1: add,\n2: subtract,\n3: multiply,\n4: divide,\n5: factorial\n";
	int option;
	cin >> option;
	switch (option) {
	case 1:
	{
		cout << endl << "Give first value for addition: ";
		int add1;
		cin >> add1;
		cout << endl << "Give second value for addition: ";
		int add2;
		cin >> add2;
		int addout = add(add1, add2);
		cout << endl << "Addition result is " << addout;
	}
		break;
	case 2:
	{
		cout << endl << "Give first value for subtraction: ";
		int sub1;
		cin >> sub1;
		cout << endl << "Give second value for subtraction: ";
		int sub2;
		cin >> sub2;
		int subout = subtract(sub1, sub2);
		cout << endl << "Subtraction result is " << subout;
	}
		break;
	case 3:
	{
		cout << endl << "Give first value for multiplication: ";
		int mul1;
		cin >> mul1;
		cout << endl << "Give second value for multiplication: ";
		int mul2;
		cin >> mul2;
		int mulout = multiply(mul1, mul2);
		cout << endl << "Multiplication result is " << mulout;
	}
		break;
	case 4:
	{
		cout << endl << "Give first value for division (Dividend): ";
		int div1;
		cin >> div1;
		cout << endl << "Give second value for division (Divisor): ";
		int div2;
		cin >> div2;
		int divout = divide(div1, div2);
		cout << endl << "Division result is " << divout;
	}
		break;
	case 5:
	{
		cout << endl << "Give value to find factorial of: ";
		int facnum;
		cin >> facnum;
		int facout = factorial(facnum);
		cout << endl << "Factorial result is " << facout;
	}
		break;
	default:
	{
		cout << endl << "Wrong choice. I force addition on you. Give first value for addition: ";
		int number1;
		cin >> number1;
		cout << endl << "Give second value for addition: ";
		int number2;
		cin >> number2;
		int out = add(number1, number2);
		cout << endl << "Addition result is " << out;
	}
		break;
	}

	
	return 0;
}

// function definition
void generic_display() {
	cout << "Hello " << "C++" << endl;
	int i = 10;
	cout << "Sample int: " << i << endl;
	char ch = 'a';
	cout << "Sample char: " << ch << endl;
	string str = "Text";
	cout << "Sample String: " << str << endl;
	float fv = 4.578f;
	cout << "Float: " << fv << endl;
	double d = 3.5899;
	cout << "Double: " << d << endl;
	bool flag = true;  // true or false. 0 is false too. everything else is true
	cout << "Boolean: " << flag << endl;
	int array[5] = { 1,2,3,4,5 };
	cout << "Array" << endl;
	for (i = 0; i < 5; i++) {

		cout << array[i] << endl;
	}
}