// Write a Program to calculate sum of odd integers from 1 to 15 (inclusive) using for loop

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(int i = 1; i <16 ; i +=2)
    {
        sum += i;
    }
    cout<<"The sum of odd integers from 1 to 15 is "<<sum;
}