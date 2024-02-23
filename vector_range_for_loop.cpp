#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num = {3,6,15,17,18,21,55,100,200,300};
    // Question: using range based for loop, find how many numbers are divisible by either 3 or 5.
    int count = 0;
    for (int a : num)
    {
        if (a%3 == 0 || a % 5 == 0)
        {
            count ++;
        }
    }
    cout<<count;
}