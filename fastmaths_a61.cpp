#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string f, s, r;
    cin >> f >> s;
    for (int k = 0; k < f.length(); ++k) {
        if (f[k] != s[k])
            r += '1';
        else
            r += '0';
    }
    cout << r << '\n';
}