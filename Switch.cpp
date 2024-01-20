#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Press 1 for Balance. \nPress 2 for MobileData. \nPress 3 for Registration. \nPress 0 to exit \n";
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
            break;                                          //If you write Default at the end, then break is not compulsory. But if you wirte default in the middle, then break is compulsory.
    }                            
    cout<<"\nOut of Switch case";
    return 0;
}