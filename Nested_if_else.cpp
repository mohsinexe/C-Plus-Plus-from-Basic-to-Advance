#include<iostream>
using namespace std;
int main()
{
    int money,partnerAge;
    cout<<"Enter Money: ";
    cin>>money;

    if(money>1000)
    {
        cout<<"Enter you partner age: ";
        cin>>partnerAge;
        if(partnerAge>21)
        {
            cout<<"Lets eat Chicken."<<endl;
        }
        else
        {
            cout<<"Lets eat Burger."<<endl;
        }
    }
    else
    {
        if(money>500)
        {
            cout<<"lets have Coffee."<<endl;
        }
        else
        {
            cout<<"lets have a cup of tea."<<endl;
        }
    }

    cout<<"lets go home.";
    return 0;
}