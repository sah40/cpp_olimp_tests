#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isArm(const string& str) {
    unsigned int _sum{0};
    unsigned int _size{str.size()};

    for (int k = 0; k < _size; ++k) {
        _sum += pow((str[k] - 48), _size);
    }

    if (stoi(str) == _sum)
        return true;
    return false;
}

int main() {
    int first, last, amount{0};
    cin >> first >> last;
    for (int k = first; k < last; ++k) {
        if (isArm(to_string(k)))
            amount++;
    }
    cout << amount << '\n';
}