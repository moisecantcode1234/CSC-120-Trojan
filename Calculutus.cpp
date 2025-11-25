#include <iostream>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();


int main ()
{
    int choice;

    cout << "Welcome to the ";
    cout << "Calculator program!" << endl;
    cout << "===================" << endl;

    do {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Please select an operation (1-4): ";
        cin >> choice; 

        while (true)
        {
            if (choice == 1) {
                addition();
                break;
            }
            else if (choice == 2) {
                subtraction();
                break;
            }
            else if (choice == 3) {
                multiplication();
                break;
            }
            else if (choice == 4) {
                division();
                break;
            }
            else {
                cout << "\nInvalid choice. Please select an operation (1-4): ";
                cin >> choice;
            }
        }

        cout << "Would you want to do another operation? (1: yes, 0: no)\n";
        cout << "Choice: ";
        cin >> choice;
    }while(choice == 1);

    cout << "\nCome again!";

}

void addition() {
    float a, b;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;
    cout << "The sum is: " << a + b << endl;
}

void subtraction() {
    float a, b;
    cout << "Enter two numbers to subtract (a - b): ";
    cin >> a >> b;
    cout << "The difference is: " << a - b << endl;
}

void multiplication() {
    float a, b;
    cout << "Enter two numbers to multiply: ";
    cin >> a >> b;
    cout << "The product is: " << a * b << endl;
}

void division() {
    float a, b;
    cout << "Enter two numbers to divide (a / b): ";
    cin >> a >> b;
    if (b != 0) {
        cout << "The quotient is: " << a / b << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}


