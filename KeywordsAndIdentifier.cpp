#include<iostream>

int main()
{
    int main = 89;
    int cout = 90;
    std::cout<<main<<std::endl<<cout<<std::endl;                   // main will print 90, cout will print 89.

    // fitst sout is object of iostream, whereas later cout is int variable
    std::cout<<cout<<std::endl;
    return 0;
}