#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int i{0};
    for (int k = 0; k < (str.length() - 1); ++k) {
        if (i == 6) break;
        if (str[k] == str[k + 1])
            ++i;
        else
            i = 0;
    }
    if (i == 6)
        cout << "YES\n";
    else
        cout << "NO\n";
}