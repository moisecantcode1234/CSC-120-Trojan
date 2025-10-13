#include <iostream>
using namespace std;

int main() {
    cout << "Just curious, what is your GPA? (0.0 - 4.0) : ";
    float gpa;
    cin >> gpa;
    if (gpa < 0.0 || gpa > 4.0) {
        cout << "Invalid GPA input. Please enter a value between 0.0 and 4.0.\n";
        cin >> gpa;
        if (gpa < 0.0 || gpa > 4.0) {
            cout << "Try again. Exiting program.\n";
            return 1;
        }
    }  
    cout << "Do you perhaps participate in any extracurricular activities? (1 for yes, 0 for no): ";
    bool exChoice;
    cin >> exChoice;
    cout << "How many credit hours do you have? : ";
    float credits;
    cin >> credits;
    
    if (gpa >= 3.5 && credits >= 30 )
        cout << "Congratulations, you qualify for our scholarship!\n";
    else if (gpa > 2.5 && exChoice)
        cout << "There's Hope! You are only Conditionally eligible for our scholarship.\n";
    else{
        cout << "Too bad. You're going to need to work harder in life.\n";
    }

    return 0;
}