#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> x(n);
    for (double& value : x) std::cin >> value;
    bool found = false;
    for (double value : x) {
        if (value < 0) {
            std::cout << value;
            found = true;
            break;
        }
    }
    if (!found) std::cout << "Отрицательных чисел нет";
}
