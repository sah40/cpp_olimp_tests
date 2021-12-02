#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, p = 0;
    cin >> n;
    for (int k = 0; k < n; ++k) {
        int percents;
        cin >> percents;
        p += percents;
    }

    cout << ((long double)p / (long double)n) << '\n';
}