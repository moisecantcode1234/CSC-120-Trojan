#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;


void showMenu();
int getMenuChoice();
bool isValidBinary(string);
bool isValidDecimal(string);
string convertDecimalToBinary(int);
int convertBinaryToDecimal(string);
void processBinaryToDecimal();
void processDecimalToBinary();

int main () {
    cout << "Hello, User!" << endl;
    cout << "Welcome to the DeBy Converter program.\n" << endl;
    cout << "This program will help you convert decimal number into binary and vice versa." << endl;

    int choice, count = 0;

    do {
        showMenu();
        cout << "\nWould you like to perform another conversion? (1 = Yes, 0 = No)";
        cout << "\nOption: ";
        cin >> choice;
        cout << endl;
        count++;
    } while (choice == 1);

    cout << "You have performed " << count << " conversions!" << endl;
    cout << "If you would like to start again, hit the F5 key...";
    return 0;
}

void showMenu() {
    cout << "Make your choice (1 or 2): \n 1. Decimal to Binary \n 2. Binary to Decimal" << endl;
    cout << "Option: ";
    if (getMenuChoice() == 1)
    {
        cout << "Can I get a decimal number to convert to binary?\n" << endl;
        processDecimalToBinary();
    } else if (getMenuChoice() == 2) {
        cout << "Can I get a binary number to convert to decimal?\n " << endl;
        processBinaryToDecimal();
    } else {
        cout << "You can't follow instructions.\nGoodbye." << endl;
    }
} 

int getMenuChoice() {
    int choice;
    cin >> choice;
    return choice;
}

void processDecimalToBinary() {
    int decimalNumber = 0;
    do {
        cout << "Enter a positive integer: ";
        cin >> decimalNumber;
    } while (!isValidDecimal(decimalNumber));
    cout << "The binary equivalent of " << decimalNumber << " is " << convertDecimalToBinary(decimalNumber);
}

bool isValidDecimal(int decimalNumber) 
{
    do {
        if (decimalNumber < 0) {
            return false;
        }
    } while (decimalNumber < 0);
    return true;
}

void processBinaryToDecimal() {
    string binaryNumber;
    do {
        cout << "Enter a positive binary number: ";
        cin >> binaryNumber;
    } while (!isValidBinary(binaryNumber));
    cout << "The decimal equivalent of " << binaryNumber << " is " << convertBinaryToDecimal(binaryNumber);
}

string convertDecimalToBinary(int decimalNumber) {
    string binaryNumber;
    int number = decimalNumber;
    if (number == 0) {
        binaryNumber = "0";
    }else {
        while (number > 0) {
            binaryNumber = to_string(number % 2) + binaryNumber;
            number /= 2;
        }
    }
    return binaryNumber;
}

bool isValidBinary(string binaryNumber) {
    do {
        if (binaryNumber.find_first_not_of("01") != string::npos) {
            cout << "Please enter a positive binary number: ";
            cin >> binaryNumber;
        }
    } while (binaryNumber.find_first_not_of("01") != string::npos);
    return true;
}

int convertBinaryToDecimal(string binaryNumber) {
    int decimalNumber;

    if (binaryNumber == "0")
        decimalNumber = 0;
    else {
        for (int i = binaryNumber.length() - 1; i >= 0 ; i--)
        {
            decimalNumber += (binaryNumber.at(i) - '0') * pow(2, binaryNumber.length() - 1 - i);
        }
    }
    return decimalNumber;
}

