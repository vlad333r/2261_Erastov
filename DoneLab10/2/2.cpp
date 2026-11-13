#include <iostream>
#include <cstddef>

int main() {
    double x[10];
    for (int i = 0; i < 10; i++)
        std::cout << reinterpret_cast<std::size_t>(&x[i]) << std::endl;
    return 0;
}
