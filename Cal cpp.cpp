/*
 * Calculator.cpp
 *
 * Date: [5/9/2024]
 * Author: [Joshua Emmons]
 */

#include <iostream>

using namespace std;

int main()  // Fixed: Changed `void main()` to `int main()` because the standard C++ main function should return int.
{
    int op1, op2;
    char operation;
    char answer = 'Y';  // Fixed: Initialized answer with 'Y' instead of "Y" (single quotes for char).
    while (answer == 'Y' || answer == 'y')  // Fixed: Logical condition to allow 'Y' and 'y'.
    {
        cout << "Enter expression (e.g., 2 + 3): ";
        cin >> op1 >> operation >> op2;  // Fixed: Order of operands should be op1 operation op2.

        switch (operation) {  // Fixed: Replaced if with switch for better readability and fixed logic.
            case '+':
                cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
                break;
            case '-':
                cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
                break;
            case '*':
                cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
                break;
            case '/':
                if (op2 != 0) {  // Added: Check to prevent division by zero.
                    cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
                } else {
                    cout << "Division by zero error!" << endl;
                }
                break;
            default:
                cout << "Invalid operation." << endl;
        }

        cout << "Do you wish to evaluate another expression? (Y/N) ";
        cin >> answer;
    }

    return 0;  // Fixed: Added return statement to satisfy the int return type.
}
