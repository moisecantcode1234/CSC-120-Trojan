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
    char kchoice;
    string fName, lName, rFeedback;
    string full, msg;

    //printf("Hello WOrld");s
    cout << "Welcome to the Guilded Hare!\n";
    cout << "============================\n";
/*
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

    full = fName + " " + lName;
    cout << "\033[31m"; // clear screen
    msg = ("Thank you " + full + " for dining with us!");
    cout << msg.length() << endl;
    cout << msg << "\n";

    cout << "Press any key to continue...\n";
    cin >> kchoice;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            cout << " ";
        }
        string choice (1 + (2 * i), kchoice);
        cout << choice << endl;
    }
    cout << "\033[0m"; // reset color
    */
    int score;
    cout << "Enter your score (0-100): ";
    cin >> score;
    if (score >= 90)
        cout << "You got an A!\n";
    else if (score >= 80)
        cout << "You got a B!\n";
    else if (score >= 70)
        cout << "You got a C!\n";
    else if (score >= 60)
        cout << "You got a D!\n";
    else {
        cout << "You got an F!\n";
    }

    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 0 )
    {
        cout << "You are not born yet";
    }

    




    cout << "Enter three numbers:";
    float a,b,c, grateater,mid, lesser;
    cin >> a >> b >> c;

    if (a > b && a > c)
        grateater = a;
    else if (b > a && b > c ) 
        grateater = b;
    else if (c > a && c > b)
        grateater = c;
    else if (a < b && a < c)
        lesser = a;
    else if (b < a && b < c)
        lesser = b;
    else if (c < a && c < b)
        lesser = c;
    cout << "The greatest number is: " << grateater << "\n";
    cout << "The lesser number is: " << lesser << "\n";









































    return 0;
}