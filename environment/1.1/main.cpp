#include"swap.h"

int main(){
    swap myswap(10,20);
    myswap.printInfo();
    myswap.run();
    myswap.printInfo();
    return 0;
}
//g++ main.cpp src/swap.cpp -Iinclude -o main