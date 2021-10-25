#include <iostream>
#include <string>
using namespace std;
int main() {
    string f, s;
    cin >> f >> s;

    for (int k = 0; k < f.size(); ++k) {
        f.at(k) = tolower(f[k]);
        s.at(k) = tolower(s[k]);
    }
    if (f < s) cout << -1;
    if (f == s) cout << 0;
    if (f > s) cout << 1;
    cout << '\n';
}