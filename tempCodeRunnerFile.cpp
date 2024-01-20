#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Press 1 for Balance. \n Press 2 for MobileData. \n Press 3 for Registration. \nPress 0 to exit";
    cin>>num;
    switch(num)                                   //Note: In switch Expression you can enter Integer or character. because Float and String are not allowed
    {
        case 1:
            cout<<"Balance category";
            break;
        case 2:
            cout<<"Mobile Data Category.";
            break;
        case 3:
            cout<<"Registration";
            break;
        case 0:
            cout<<"Program Exit";
            break;
        default:
            cout<<"Enter Valid Choice.";
            break;
    }
    cout<<"\nOut of Switch case";
    return 0;
}