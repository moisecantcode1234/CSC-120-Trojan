#include <iostream>
#include <string>
using namespace std;

void convertDecimalToBinary();
void convertBinaryToDecimal();


int main () {
    cout << "Hello, User!" << endl;
    cout << "Welcome to the DB Converter program." << endl;
    cout << "This program will help you convert decimal number into binary and vice versa." << endl;

    cout << "Make your choice (1 or 2): \n 1. Decimal to Binary \n 2. Binary to Decimal" << endl;
    int choice;
    cout << "Option: ";
    cin >> choice;
    if (choice == 1) {
        convertDecimalToBinary();
    } else if (choice == 2) {
        convertBinaryToDecimal();
    } else {
        cout << "You can't follow instructions.\nGoodbye." << endl;
        return 1;
    }
    return 0;
}

void convertDecimalToBinary() {
    int decimalNumber;
    cout << "Enter a positive integer (0 - 15): ";
    do {
        cin >> decimalNumber;
        if (decimalNumber < 0) {
            cout << "Please enter a positive integer: ";
        }
    } while (decimalNumber < 0);
    switch (decimalNumber) {
        case 0:
            cout << "The binary equivalent is: 0000" << endl;
            break;
        case 1:
            cout << "The binary equivalent is: 0001" << endl;
            break;
        case 2:
            cout << "The binary equivalent is: 0010" << endl;
            break;
        case 3:
            cout << "The binary equivalent is: 0011" << endl;
            break;
        case 4:
            cout << "The binary equivalent is: 0100" << endl;
            break;
        case 5:
            cout << "The binary equivalent is: 0101" << endl;
            break;
        case 6:
            cout << "The binary equivalent is: 0110" << endl;
            break;
        case 7:
            cout << "The binary equivalent is: 0111" << endl;
            break;
        case 8:
            cout << "The binary equivalent is: 1000" << endl;
            break;
        case 9:
            cout << "The binary equivalent is: 1001" << endl;
            break;
        case 10:
            cout << "The binary equivalent is: 1010" << endl;
            break;
        case 11:
            cout << "The binary equivalent is: 1011" << endl;
            break;
        case 12:
            cout << "The binary equivalent is: 1100" << endl;
            break;
        case 13:
            cout << "The binary equivalent is: 1101" << endl;
            break;
        case 14:
            cout << "The binary equivalent is: 1110" << endl;
            break;
        case 15:
            cout << "The binary equivalent is: 1111" << endl;
            break;
        default:
            cout << "Number out of range. Please enter a number between 0 and 15." << endl;
    }
}

void convertBinaryToDecimal() {
    int binaryNumber;
        
    do {
        cout << "Enter a positive binary number (0000 - 1111): ";
        cin >> binaryNumber;
    } while (to_string(binaryNumber).find_first_not_of("01") != string::npos);

    switch (binaryNumber) {
        case 0:
            cout << "The decimal equivalent is: 0" << endl;
            break;
        case 1:
            cout << "The decimal equivalent is: 1" << endl;
            break;
        case 10:
            cout << "The decimal equivalent is: 2" << endl;
            break;
        case 11:
            cout << "The decimal equivalent is: 3" << endl;
            break;
        case 100:
            cout << "The decimal equivalent is: 4" << endl;
            break;
        case 101:
            cout << "The decimal equivalent is: 5" << endl;
            break;
        case 110:
            cout << "The decimal equivalent is: 6" << endl;
            break;
        case 111:
            cout << "The decimal equivalent is: 7" << endl;
            break;
        case 1000:
            cout << "The decimal equivalent is: 8" << endl;
            break;
        case 1001:
            cout << "The decimal equivalent is: 9" << endl;
            break;
        case 1010:
            cout << "The decimal equivalent is: 10" << endl;
            break;
        case 1011:
            cout << "The decimal equivalent is: 11" << endl;
            break;
        case 1100:
            cout << "The decimal equivalent is: 12" << endl;
            break;
        case 1101:
            cout << "The decimal equivalent is: 13" << endl;
            break;
        case 1110:
            cout << "The decimal equivalent is: 14" << endl;
            break;
        case 1111:
            cout << "The decimal equivalent is: 15" << endl;
            break;
        default:
            cout << "Invalid binary number. Please enter a number between 0000 and 1111." << endl;
    }
}
