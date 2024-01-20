#include<iostream>
using namespace std;

int main()
{
    int money;
    cout<<"How much money you have ";
    cin>>money;

    if (money>=3000)
    {
        cout<<"You have "<<money<<" money";
        cout<<"Lets eat Chicken."<<endl;
    }
    else if (money>=2000)
    {
        cout<<"You have "<<money<<" money."<<endl;
        cout<<"lets eat Burger."<<endl;
    }
    else if (money>= 1000)
    {
        cout<<"You have "<<money<<" money."<<endl;
        cout<<"Lets eat Shwarma"<<endl;
    }
    else
    {
        cout<<"You have "<<money<<" money"<<endl;
        cout<<"Lets have tea"<<endl;
    }
    
    cout<<"Lets go home.";

    return 0;
}