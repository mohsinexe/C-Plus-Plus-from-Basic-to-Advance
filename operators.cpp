#include<iostream>
using namespace std;

int main()
{
    // Below different Operators are used, Simply uncomment each and you can print and learn from it.

    // Arithmetic Operators
    /* int x=10,y=3;
    cout<<"Addition: " <<x+y<<endl;
    cout<<"Subtraction: " <<x-y<<endl;
    cout<<"Multiplication: "<<x*y<<endl;
    cout<<"Division: "<<x/y<<endl;
    cout<<"Modulo: "<<x%y<<endl; */

    // Post-increment & Pre-increment
    /* int a=10;
    int b;
    b=++a;
    cout<<a<<endl<<b<<endl;

    int c=10;
    int d;
    d=c++;
    cout<<c<<endl<<d<<endl; */

    // Post-decreement & Pre-decreement
    /* float e = 9.678;
    float f;
    f=e--;
    cout<<e<<endl<<f<<endl;
    f=--e;
    cout<<e<<endl<<f<<endl; */

    // Relational Operators
    /* int p = 3, q = 6;
    cout<<"p<q : "<<(p<q)<<endl;
    cout<<"p>q : "<<(p>q)<<endl;
    cout<<"p<=q : "<<(p<=q)<<endl;
    cout<<"p>=q : "<<(p>=q)<<endl;
    cout<<"p==q : "<<(p==q)<<endl;
    cout<<"p!=q : "<<(p!=q)<<endl;

    cout<<((p+1)<(q-5))<<endl; */

    // Logical Operator
    /* int x = 5, y =10;
    if((x>5) && (y<15))
    {
        cout<<"x+y: "<<x+y<<endl;
    }
    else if((x<=5)||(y>15))
    {
        cout<<"x-y: "<<x-y<<endl;
    }
    else{
        cout<<"!x: "<<!x<<endl;
    } */

    // Bitwise Operators
    /* int x = 26, y = 9;
    cout<<"x&y: "<<(x&y)<<endl;   // 26 and 9 will be converted to binary first, and then it will do calculations on the basis of AND operator.
    cout<<"x|y: "<<(x|y)<<endl;
    cout<<"x^y: "<<(x^y)<<endl;
    cout<<"x<<1: "<<(x<<1)<<endl;
    cout<<"x>>1: "<<(x>>1)<<endl;
    cout<<"~x: "<<(~x)<<endl;  */

    // Miscellaneous Operators

    float x= 6.78;
    cout<<(int)x<<endl;
    cout<<x<<endl;

    // Conditional Operator
    int a = 3,b=2;
    cout<<"Maximum is: "<<((a>b)?a:b)<<endl;

    cout<<((a>b)?(a+2):(b-5))<<endl;
    cout<<sizeof(a);

    return 0;
}