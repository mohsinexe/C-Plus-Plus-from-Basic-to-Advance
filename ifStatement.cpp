#include<iostream>
using namespace std;
int main()
{
    int money, age;
    cout<<"How much money you have: ";
    cin>>money;
    cout<<"Enter age: ";
    cin>>age;

    if ((money>=1000)&&(age>15))
        cout<<"Coffee in Mardan."<<endl;

    if((money<500))
    {
        cout<<"No coffee in Mardan"<<endl;
        cout<<"You have less than 500 rupees"<<endl;
    }

    if ((age<10))
    {
        cout<<"You are less than 10 years of age"<<endl;
    }    

    if((age<5));                           // semicolon ; after condition directly, so it will print nothing.

    cout<<"Lets go home.";

    return 0;
}