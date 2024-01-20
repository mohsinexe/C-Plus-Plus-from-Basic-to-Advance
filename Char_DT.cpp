#include<iostream>
using namespace std;
int main()
{
    char ch = 'a';
    cout<<ch<<endl;

    // typecasting
    cout<<(int)ch<<endl;

    char n = 2;
    char n2 = '2';
    cout<<n<<endl;     //It will give Grabage value because 0 to 31 are unpredictable and they are commands. 
    cout<<n2<<endl;
    return 0;
}