#include <iostream>
#include "func1.h"

void func2() {
    int y = 0;

    y+=3;
    
    std::cout << y << std::endl;
}

int main() {

    func1();
    func2();
}