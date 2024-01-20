#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main()
{
    float x = 456.32422342f;
    double a = 9.12431491251293;
    long double aa = 93242.4234223;
    cout<<cout.precision()<<endl;

    cout<<setprecision(9);
    cout<<"double a = "<<a<<endl;
    cout<<"long Double aa= "<<aa<<endl;
    cout<<"float x= "<<x<<endl;


    cout<<numeric_limits<float>::digits10<<endl;
    cout<<numeric_limits<double>::digits10<<endl;
    cout<<numeric_limits<long double>::digits10<<endl;

    return 0;
}