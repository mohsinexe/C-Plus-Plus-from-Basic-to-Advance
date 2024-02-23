#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a positive number: ";
    cin>>a;
    while(a>0)
    {
        cout<<a<<endl;
        a--;
    }
    cout<<"end";
    return 0;
}