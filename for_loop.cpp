#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        cout<<i<<endl;
    }
    cout<<"end of loop";

    // Note: You can use more than 3 expressions or even less than 3 expressions in for loop
    // But You cannot use more or less than 2 semi colons in for loop.
    // Important Point to Note: If there are more than 1 condition in for loop, then Last will be consider for termination.
    // As in below example j<5 is considered for tetrmination instead of i<10
    for(int i =0, j = 1; i<10,j<5 ; i++,j++)
    {
        cout<<"i="<<i<<" j="<<j<<endl;
    }
    cout<<"end of loop";

    //Note: Here below there is only 1 condition.
    for(int i =0, j = 1; i<10 || j<5 ; i++,j++)
    {
        cout<<"i="<<i<<" j="<<j<<endl;
    }
    cout<<"end of loop";
    return 0;
}