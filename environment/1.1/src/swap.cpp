#include "swap.h"
swap::swap(int a,int b)
{
    this->a=a;
    this->b=b;
}


void swap::run()
{
    int temp = a;
    a = b;
    b = temp;
}

void swap::printInfo() 
{
    std::cout << "a = " << a << ", b = " << b << std::endl;
}

swap::~swap()
{
}
