#include<iostream>
using namespace std;

int main()
{
    int y = 3,z;
    z = (y++)+(y=10);
    cout<<z<<endl;

    int a = 3, b;
    b = (++a) + (a=10);          // Here a is incremented and it will become 4, but it will not execute yet. Now a=10 then a + a which means 10+10, thats why it will print 20 instead of 14
    cout<<b<<endl;
    return 0;
}