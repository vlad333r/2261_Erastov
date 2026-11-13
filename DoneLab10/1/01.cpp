#include <iostream>

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    p = q;;
    std::cout << *p << " " << *q << "\n";
    std::cout << a << " " << b << "\n";
    p = &a;
    *p = *q;
    std::cout << "\n";
    std::cout << *p << " " << *q << "\n";
    std::cout << a << " " << b << "\n";
}
