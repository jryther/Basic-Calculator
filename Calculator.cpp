/*
 * Calculator.cpp
 *
 *  Date: 05/09/20
 *  Author: Josh RYther
 */

#include <iostream>
using namespace std; //Added so that the file can get input and output

int main() //Updated the return type from void to int
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'y'; //Updated char to be lowercase and added semicolon

	while (answer=='y')
	{
		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2; //Fixed the order of op inputs
		if (operation == '+') { //Corrected plus sign to a char
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //Corrected arrows pointing the wrong way
		}
		if (operation == '-'){
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; //Corrected arrows pointing the wrong way
		}
		if (operation == '*'){
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; //Added semicolon
		}
		if (operation == '/'){
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
		}

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
}







