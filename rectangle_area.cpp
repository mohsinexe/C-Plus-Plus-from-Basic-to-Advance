#include <iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        float l, b, area = 0;
        cout << "Enter Length and Breadth separated by a space: ";
        cin >> l >> b;
        area = l * b;

        cout << "The area is " << area << endl;
        cout << "Want to calculate another(Y/N)?? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "End of Loop";
    return 0;
}
