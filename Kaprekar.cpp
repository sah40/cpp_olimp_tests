#include <iostream>
#include <string>
using namespace std;
bool isKaprekar(int i) {
    unsigned long long num = i * i;
    auto pow = [](int a, int b) {
        int value{a};
        for (; b > 1; --b) {
            value *= a;
        }
        return value;
    };

    string s = to_string(num);
    uint size{s.size()}, base1, base2;

    for (int k = 1; k < size; ++k) {
        base1 = (num / pow(10, k));
        base2 = (num % pow(10, k));
        if (base1 + base2 == i)
            return true;
    }
    return false;
}

int main() {
    bool b{true};
    uint in, left{0}, right{0};
    cin >> in;

    for (int k = 1; b; ++k) {
        if (in != k) left = in - k;
        right = in + k;
        if (isKaprekar(left) || isKaprekar(right)) {
            b = {false};
        }
    }
    if (isKaprekar(left))
        cout << left << ' ';
    if (isKaprekar(right))
        cout << right << '\n';
}
