#include <iostream>
#include "math.h"

int main() {
	using namespace std;
	int x = 10;
	cout << "Before changing pointer value: " << x << "\n";
	//Always try to initialize pointers to nullptr
	int *ptr = &x;
	//cout << *ptr << "\n";
	*ptr = 5;
	cout << "After changing pointer value: " << x << "\n";
	cout << "choose any of the following options.\n"
		"1. add value using pointers\n"
		"2. add value and store in pointer\n"
		"3. swap using pointers\n"
		"4. factorial and store in pointer\n" << endl;
	int option;
	cin >> option;
	switch (option) {
	case 1: {
		cout << "Enter first value for addition: ";
		int first_val;
		cin >> first_val;
		cout << "Enter second value for addition: ";
		int second_val;
		cin >> second_val;
		int add_out = Add(&first_val, &second_val);
		cout << "Output value stored in an integer variable: " << add_out;
	}
		  break;
	case 2: {
		cout << "Enter first value for addition: ";
		int first_val_p;
		cin >> first_val_p;
		cout << "Enter second value for addition: ";
		int second_val_p;
		cin >> second_val_p;
		int output_p;
		AddVal(&first_val_p, &second_val_p, &output_p);
		cout << "Output value returned through pointer: " << output_p;
	}
		  break;
	case 3: {
		cout << "Enter first value for swap: ";
		int first_swap;
		cin >> first_swap;
		cout << "Enter second value for swap: ";
		int second_swap;
		cin >> second_swap;
		cout << "Before swap. First value: " << first_swap << ". Second val:" << second_swap << endl;
		Swap(&first_swap, &second_swap);
		cout << "After swap. First value: " << first_swap << ". Second val:" << second_swap << endl;
	}
		  break;
	case 4: {
		cout << "Enter value to find factorial: ";
		int factorial_val;
		cin >> factorial_val;
		int result;
		Factorial(&factorial_val, &result);
		cout << "Factorial output: " << result << endl;
	}
	default:
		break;
	}
	return 0; 
}