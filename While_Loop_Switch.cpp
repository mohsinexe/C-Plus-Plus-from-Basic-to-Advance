#include<iostream>
using namespace std;
int main()
{
    int num;
    while(num != 0){
    cout<<"Press 1 for Balance. \nPress 2 for MobileData. \nPress 3 for Registration. \nPress 0 to exit \n";
    cin>>num;
    switch(num)                                   //Note: In switch Expression you can enter Integer or character. because Float and String are not allowed
    {
        case 1:
            cout<<"Balance category"<<endl;
            break;
        case 2:
            cout<<"Mobile Data Category."<<endl;
            break;
        case 3:
            cout<<"Registration"<<endl;
            break;
        case 0:
            cout<<"Program Exit"<<endl;
            break;
        default:
            cout<<"Enter Valid Choice."<<endl;
            continue;
    }
    // break;
}
    cout<<"\nOut of Switch case";
    return 0;
}