#include <iostream>

int main() {
    int a = 6, b = 3;
    int product = a * b;
    int *p = &a;
    int &r = b;
    std::cout << product << " " << *p << " " << r << " " << (a & b);
}
