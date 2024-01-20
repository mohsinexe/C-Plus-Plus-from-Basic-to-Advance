#include<iostream>
using namespace std;
int main()
{
    wchar_t ch =L'Ğ';
    cout<<ch<<endl;
    cout<<(int)ch<<endl;

    cout<<sizeof(wchar_t)<<endl;
    return 0;
}