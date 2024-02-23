#include <iostream>
using namespace std;

int main()
{
    int num;
    bool check = false;
    while (!check)                                                 //!check means notFalse which means True.
    {
        cout << "Enter number less than 5: ";
        cin >> num;
        if (num >= 5)
        {
            cout<<"Invalid Number"<<endl;
        }
        else
        {
            cout<<"User entered "<<num<<endl;
            check = true;                                             // If you dont write it then it will be infinite loop. !check means notTrue here so It becomes false.
        }
    }
}