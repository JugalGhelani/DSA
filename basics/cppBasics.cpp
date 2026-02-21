#include <iostream>
#include <string>
using namespace std;

/*
    Function Declaration
    This function adds two integers
*/
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Variable Declaration
    int age = 20;
    float pi = 3.14;
    char grade = 'A';
    bool isStudent = true;

    // Output
    cout << "Age: " << age << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    // Integer Input
    int number;
    cout << "\nEnter a number: ";
    cin >> number;

    // String Input (WITHOUT spaces)
    string firstName;
    cout << "Enter your first name (no spaces): ";
    cin >> firstName; // stops at space

    // Clear input buffer before getline
    cin.ignore();

    // String Input (WITH spaces)
    string fullName;
    cout << "Enter your full name (with spaces): ";
    getline(cin, fullName); // reads full line including spaces

    cout << "\nFirst Name: " << firstName << endl;
    cout << "Full Name: " << fullName << endl;

    // If-Else Condition
    if (number > 0)
    {
        cout << "Number is positive" << endl;
    }
    else if (number < 0)
    {
        cout << "Number is negative" << endl;
    }
    else
    {
        cout << "Number is zero" << endl;
    }

    // Switch Statement
    int day = 3;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    default:
        cout << "Invalid day";
    }
    cout << endl;

    // Loops
    cout << "\nFor Loop: ";
    for (int i = 1; i <= 5; i++)
        cout << i << " ";

    cout << "\nWhile Loop: ";
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }

    cout << "\nDo-While Loop: ";
    int j = 1;
    do
    {
        cout << j << " ";
        j++;
    } while (j <= 5);

    cout << endl;

    // Array
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "\nArray elements: ";
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    // Function Call
    cout << "\nSum (5 + 7): " << add(5, 7) << endl;

    return 0;
}