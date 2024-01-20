#include<iostream>
using namespace std;
int main()
{
    unsigned short ushort_int = 13;
    signed short signed_short = -4;
    int a = 78261693;
    long int long_int = 9357025;
    long long int ll_int = 927013659213;
    int8_t int8_variable = 2;

    cout<<"size of short int "<<sizeof(short int)<<endl;
    cout<<"size of int "<<sizeof(int)<<endl;
    cout<<"size of long "<<sizeof(long)<<endl;
    cout<<"size of long long "<<sizeof(long long)<<endl;
    cout<<"size of int8_t "<<sizeof(int8_t)<<endl;

    cout<<"unsigned short int: "<<ushort_int<<endl;
    cout<<"signed short int value: "<<signed_short<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"long int: "<<long_int<<endl;
    cout<<"signed long long int: "<<ll_int<<endl;
    cout<<"int8_t value: "<<int8_variable<<endl;

    return 0;
}