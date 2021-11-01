#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, p = 0;
    cin >> n;
    int percents[n];

    for (int k = 0; k < n; ++k) {
        cin >> percents[k];
        p += percents[k];
    }

    cout << ((long double)p / (long double)n) << '\n';
}