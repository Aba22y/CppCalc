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
    cout << "============================================" << endl;
}

void display_output(double result) {
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
    cout <<result<< endl;
    cout << "============================================" << endl;
}


int main() {
    double op1 = 0;
    double op2 = 0;

    double answer = 0;
    char input = '\n';

    show_calculator();
        while (input != '.') {
            cout<<"Calculate: ";
            cin>>input;
            if (input == '+' || input == '-' || input =='*' || input == '/' || input == 'm' || input == 'P') {
                cout<<"Operand 1: ";
                cin>>op1;
                cout<<"Operand 2: ";
                cin>>op2;
            } else if (input == 'k' || input == '.') {
                //Do nothing
            } else {
                cout<<"Operand 1: ";
                cin>>op1;
            }
        }
        return 0;
}
