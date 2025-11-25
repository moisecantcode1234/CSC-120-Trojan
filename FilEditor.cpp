#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string getFileName(int);

int main() {
    int number;
    cout << "We're going to attempt to create and write to a file." << endl;
    cout << "Can i just randomly get a number from you?\n";
    cin >> number;
    
    ofstream fout;
    fout.open(getFileName(number), ios::out);

    if (!fout.is_open()) {
        cout << "\nError opening file!" << endl;
        return 1;
    }

    for (int i = 0; i <= 12; i++)
    {
        int result = number * i;
        fout << number << " x " << i << " = " << result << endl;
    }
    
    fout.close(); // Always close when done
}

string getFileName(int number)
{
    string name = to_string(number) + "_times_tables.txt";
    return name;
}