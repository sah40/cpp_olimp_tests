#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    size_t n = 4, toBuy{0};
    long long int horseshoes[n];

    for (int k = 0; k < n; ++k)
        cin >> horseshoes[k];
    sort(horseshoes, horseshoes + n);
    for (int k = 1; k < n; ++k) {
        if (horseshoes[k] == horseshoes[k - 1])
            ++toBuy;
    }
    cout << toBuy << '\n';
}