#include <iostream>
using namespace std;

int main() {
    int age, marks;
    int choice;
    int a, b;

    cout << "========== Decision Maker Console ==========" << endl;


  
    cout << "\nEnter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "You are eligible to vote." << endl;
    else
        cout << "You are not eligible to vote." << endl;

    cout << "\nEnter your marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A" << endl;
    else if (marks >= 75)
        cout << "Grade: B" << endl;
    else if (marks >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    cout << "\nCalculator Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
