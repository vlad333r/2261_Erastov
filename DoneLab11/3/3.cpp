#include <iostream>

using std::vector;

void dosome_1(const vector<int> &V) {
    int s = 0;
    for (auto x: V) {
        s += x;
    }
    std::cout << s << std::endl;
}

void dosome_2(vector<int> &V) {
    int s = 0;
    for (auto x: V) {
        s += x;
    }
    std::cout << s << std::endl;
}

void dosome_3(const vector<int> V) {
    int s = 0;
    for (auto x: V) {
        s += x;
    }
    std::cout << s << std::endl;
}

void dosome_4(vector<int> V) {
    int s = 0;
    for (auto x: V) {
        s += x;
    }
    std::cout << s << std::endl;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    dosome_1(A);
    dosome_2(A);
    dosome_3(A);
    dosome_4(A);
    return 0;
}
