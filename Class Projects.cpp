#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <ostream>

using namespace std;

int main()
{
    const float maTax = .0675;
    float meal, total, tip, radius;
    string fName, lName, rFeedback;

    //printf("Hello WOrld");s
    cout << "Welcome to the Guilded Hare!\n";
    cout << "============================\n";

    cout << "Enter your first name: ";
    getline(cin, fName);
    cout << "Enter your last name: ";
    getline(cin, lName);

    cout <<"Hello, "<< fName << " " << lName << "\n";

    cout << "Do you know how many inches roughly is the radius of the plate you dined on? (i.e. 7.5): ";
    cin >> radius;

    cout << "The area of your plate tonight was: ~" << (3.14 * radius * radius) << " square inches.\n";

    cout << "Enter the cost of your meal: $";
    cin >> meal;

    cout << "The tax on your meal is: $" << (meal * maTax) << "\n";

    cout << "How much in percent would you like to tip? (15% recommended): ";
    cin >> tip;

    // Calculate the tip and total
    if (tip != 15)
        tip = ((meal * maTax) + meal) * (tip / 100);
    else
    tip = ((meal * maTax) + meal * .15);
    total = meal + tip + (meal * maTax);

    // Display the results
    cout << fixed << setprecision(2);
    cout << "\nThank you " << fName << " " << lName << " for your order.\n";
    cout << "Your meal cost is: $" << meal << "\n";
    cout << "Your tip is: $" << tip << "\n";
    cout << "The tax rate is: " << maTax * 100 << "%\n";
    cout << "Your total is: $" << total << "\n";

    cout << "\nDo you want to leave a review of our services? : ";
    cin.ignore();
    getline(cin, rFeedback);

    cout << "The first letter of your feedback is: " << rFeedback[0] << "\n";
    cout << "The last letter of your feedback is: " << rFeedback[rFeedback.length() - 1] << "\n";
    cout << "The length of your feedback is: " << rFeedback.length() << " characters.\n";
    if (rFeedback.find(" ") == string::npos)
        cout << "There are no spaces in your feedback. Idk why tho -_-\n";
    else
    cout << "The first space in your feedback is at position: " << rFeedback.find(" ") << "\n";

    return 0;
}