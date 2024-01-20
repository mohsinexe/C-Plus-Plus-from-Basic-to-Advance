#include <iostream>
using namespace std;

int main()
{
    void *ptr;
    int x = 10;
    ptr = &x; // ptr equals to adress of x
    // cout<<*ptr<<endl;   //It will give error
    cout << *(int *)ptr << endl;

    bool p = 50;
    cout << p << endl; // It will print 1 because it will consider 45 as true value
}