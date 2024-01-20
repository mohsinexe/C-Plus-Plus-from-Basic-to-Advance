#include<iostream>
using namespace std;
int main()
{
    // During Declaration Comma act as Separator, but when assigning values it act as Operator
    // Comma Operator discards values to the left

    // int a = 5,4; will give error.
    // int a = 5,4;
    int b = (5,4);
    cout<<b<<endl;

    int x;
    x = (printf("Mohsin"),2,3);
    cout<<endl;
    cout<<x<<endl;

    int y = 8, z;
    z = (y++,++y);
    cout<<z<<endl;
    y = 8;
    z = y++, ++y;
    cout<<z<<endl;

    y = 8;
    z = (y++,++y,y<<2);
    cout<<z<<endl;
    return 0;
}