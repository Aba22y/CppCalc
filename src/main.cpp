#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void show_calculator() {
    cout << "============================================" << endl;
    cout << "|          CONSOLE CALCULATOR MENU         |" << endl;
    cout << "============================================" << endl;
    cout << "|   +  | ADD        |   -  | MINUS         |" << endl;
    cout << "|   *  | MULTIPLY   |   /  | DIVIDE        |" << endl;
    cout << "|   m  | MOD        |   L  | LOG           |" << endl;
    cout << "|   S  | SQUARE     |   C  | CUBE          |" << endl;
    cout << "|   P  | POWER      |   r  | SQRT          |" << endl;
    cout << "|   s  | SIN        |   c  | COS           |" << endl;
    cout << "|   t  | TAN        |   k  | CLEAR         |" << endl;
    cout << "|   .  | CLOSE      |                      |" << endl;
    cout << "============================================" << endl;
}

int main() {
    double op1 = 0;
    double op2 = 0;

    double answer = 0;
    char input = '\n';

    show_calculator();
    while (true) {
        cout << "Enter a single operation: ";
        cin >> input;

        if (input == '.') {
            cout << "Exiting...\n";
            break;
        }

        // Clear screen
        if (input == 'k') {
            system("cls");
            show_calculator();
            continue;
        }

        // Two-operand operations
        if (input == '+' || input == '-' || input == '*' || input == '/' || input == 'm' || input == 'P') {
            cout << "Operand 1: ";
            cin >> op1;
            cout << "Operand 2: ";
            cin >> op2;
        }
        // One-operand operations
        else {
            cout << "Operand: ";
            cin >> op1;
        }

        switch (input) {
            case '+': answer = op1 + op2; break;
            case '-': answer = op1 - op2; break;
            case '*': answer = op1 * op2; break;
            case '/':
                if (op2 == 0) {
                    cout << "Error: Division by zero!\n";
                    continue;
                }
                answer = op1 / op2;
                break;
            case 'm':
                answer = int(op1) % int(op2);
                break;
            case 'P': answer = pow(op1, op2); break;
            case 'S': answer = op1 * op1; break;
            case 'C': answer = op1 * op1 * op1; break;
            case 'r': answer = sqrt(op1); break;
            case 'L': answer = log10(op1); break;
            case 's': answer = sin(op1); break;
            case 'c': answer = cos(op1); break;
            case 't': answer = tan(op1); break;

            default:
                cout << "Unknown command.\n";
                continue;
        }

        cout << "--------------------------------------------\n";
        cout << "Result: " << answer << "\n";
        cout << "--------------------------------------------\n";
    }
    return 0;
}
