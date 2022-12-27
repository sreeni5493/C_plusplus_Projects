#include <iostream>
#include "math.h"
int main() {
	using namespace std;
	//Referent
	int x = 10;
	//Reference
	int &ref = x;
	int y = 20;
	ref = y;
	cout << "x:" << x << endl;
	cout << "ref:" << ref << endl;
	cout << "Reference program. Enter your option.\n"
		"1. Add\n"
		"2. Factorial\n"
		"3. Swap\n";
	int option;
	cin >> option;
	switch (option)
	{
	case 1:
	{
		cout << "Enter addition number 1: " << endl;
		int number1;
		cin >> number1;
		cout << "Enter addition number 2: " << endl;
		int number2;
		cin >> number2;
		int result_add;
		Add(number1, number2, result_add);
		cout << "Addition is " << result_add << endl;
	}
	break;
	case 2:
	{
		cout << "Enter factorial number: " << endl;
		int factorial_number;
		cin >> factorial_number;
		int result_factorial;
		Factorial(factorial_number, result_factorial);
		cout << "Factorial is " << result_factorial << endl;
	}
	break;
	case 3:
	{
		cout << "Enter first number: " << endl;
		int swap_number1;
		cin >> swap_number1;
		cout << "Enter second number: " << endl;
		int swap_number2;
		cin >> swap_number2;
		cout << "Before swap. First number: " << swap_number1 << ". Second number: " << swap_number2 << endl;
		Swap(swap_number1, swap_number2);
		cout << "After swap. First number: " << swap_number1 << ". Second number: " << swap_number2 << endl;
	}
	break;
	default:{
		cout << "Wrong option. Forcing addition on you. Enter addition number 1: " << endl;
		int number1;
		cin >> number1;
		cout << "Enter addition number 2: " << endl;
		int number2;
		cin >> number2;
		int result_add;
		Add(number1, number2, result_add);
		cout << "Addition is " << result_add << endl;
	}
	break;
	}
	return 0 ;
}