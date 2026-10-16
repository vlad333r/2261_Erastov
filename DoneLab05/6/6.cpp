#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    double s = std::pow(2, n);
    std::cout << std::fixed << s << '\n';
}
