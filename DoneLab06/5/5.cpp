#include <iostream>

namespace bus {
    int price = 35;
    int cost(int trips) { return price * trips; }
}

namespace tram {
    int price = 30;
    int cost(int trips) { return price * trips; }
}

int main() {
    std::cout << bus::cost(4) << '\n';
    std::cout << tram::cost(4) << '\n';
}
