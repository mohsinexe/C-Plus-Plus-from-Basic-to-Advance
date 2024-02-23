#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {3,5,1};
    for (int b : a)
    {
        cout<<b<<endl;
    }
    cout<<"Loop ends"<<endl;;

    for(auto b : a)                        //auto keyword will automatically search which datatype is used.However if you know the datatype, then no use of auto
    {
        cout<<b<<endl;
    }
    cout<<"Loop ends"<<endl;

    for(int b : {1,7,3})
    {
        cout<<b<<endl;
    }
    cout<<"Loop ends"<<endl;

    vector<int> num = {7,8,1,3};
    for (int a : num)
    {
        cout<<a<<endl;
    }
    cout<<"Loop ends"<<endl;

    for(char str : "Mohsin Behzad")
    {
        if(str != ' ')
            {
                cout<<str;
            }
    }
    cout<<"\nLoop ends"<<endl;
}