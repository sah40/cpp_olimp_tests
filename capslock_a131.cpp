#include <bits/stdc++.h>
using namespace std;

bool isWrong(string_view s) {
    for (int k = 1; k < s.length(); ++k) {
        // vector<int> arr(s.length());
        if (s[k] > 96)
            return false;
    }
    return true;
}
int main() {
    string str;
    cin >> str;
    if (isWrong(str)) {
        if (str[0] > 96)
            str[0] -= 32;
        else
            str[0] += 32;
        for (int k = 1; k < str.length(); ++k) {
            str[k] += 32;
        }
    }

    cout << str << '\n';
}