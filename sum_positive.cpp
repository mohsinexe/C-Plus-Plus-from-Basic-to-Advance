#include <iostream>
using namespace std;
int main()
{
    int num=0,sum = 0;
    do 
    {
        sum += num;                                             // Note:If you dont initialize num =0, then it will add any random number at first.
        cout<<"Enter positive integers to sum: ";
        cin>>num;
    } while (num>=0);
    cout<<"sum = "<<sum;
    return 0;
}