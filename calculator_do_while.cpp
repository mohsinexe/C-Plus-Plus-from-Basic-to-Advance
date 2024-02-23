#include <iostream>
using namespace std;
int main()
{
    char choice;
    int a, b, sum = 0, sub = 0, mul = 0, div = 0;
    do
    {
        cout << "1. Addition " << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Multiplication " << endl;
        cout << "4. Division " << endl;
        cout << "Q. Quit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1')
        {
            cout << "Enter two numbers separated by a space: ";
            cin >> a >> b;
            sum = a + b;
            cout << "Addition is: " << sum << endl;
        }
        else if (choice == '2')
        {
            cout << "Enter two numbers separated by a space: ";
            cin >> a >> b;
            sub = a - b;
            cout << "Subtraction is " << sub << endl;
        }
        else if (choice == '3')
        {
            cout << "Enter two numbers separated by a space: ";
            cin >> a >> b;
            mul = a * b;
            cout << "Multiplication is " << mul << endl;
        }
        else if (choice == '4')
        {
            cout << "Enter two numbers separated by a space: ";
            cin >> a >> b;
            div = a / b;
            cout << "Division is " << div << endl;
        }
        else if (choice == 'q' || choice == 'Q')
        {
            cout << "Program Ends.";
        }
        else
        {
            cout << "Wrong choice, Try Again" << endl;
        }
    } while (choice != 'q' && choice != 'Q');

    return 0;
}