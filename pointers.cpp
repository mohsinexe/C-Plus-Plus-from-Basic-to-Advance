#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c;
    int *p, *q;
    p = &a;
    q = &b;
    c = *q;
    printf("c = %d ", c);
    printf("\na = %d ", a);
    printf("\n&p = %x", p);                  // %x will give output in hexadecimal
    printf("\n&p = %d", p);                  // p will print value of adress
    printf("\na = %d", *p);                  // *p will print value at adress

    printf("\na = %d", *(&a));               // *(&a) will print value at adress of a
    printf("\na = %x", &a);                  // &a will print value of address
    return 0;
}