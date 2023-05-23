#include <iostream>

void func1() {
    int x = 0;

    x+=2;

    std::cout << x << std::endl;
}

void func2() {
    int y = 0;

    y+=3;
    
    std::cout << y << std::endl;
}

int main() {

    func1();
    func2();
}