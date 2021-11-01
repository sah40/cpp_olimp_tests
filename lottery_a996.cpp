#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p{0};
    cin >> n;
    while (n != 0) {
        if (n >= 100) {
            n -= 100;
            ++p;
            continue;
        }
        if (n >= 20) {
            n -= 20;
            ++p;
            continue;
        }
        if (n >= 10) {
            n -= 10;
            ++p;
            continue;
        }
        if (n >= 5) {
            n -= 5;
            ++p;
            continue;
        }
        if (n >= 1) {
            n -= 1;
            ++p;
            continue;
        }
    }

    cout << p << '\n';
}