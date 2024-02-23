// Write a Program to calculate sum of even integers from 1 to 16 (inclusive) using for loop

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(int i = 2; i <=16 ; i++)
    {
        if(i%2 == 0)
        {
            sum += i;
        }
    }
    cout<<"The sum of even integers from 1 to 16 is "<<sum;
}