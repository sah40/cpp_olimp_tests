#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<string, int> p[2];

    string s;
    cin >> s;
    p[0].first = s;
    p[0].second = 1;
    p[1].first = "2";
    p[1].second = 0;
    for (int k = 1; k < n; ++k) {
        cin >> s;
        if (s == p[0].first)
            p[0].second++;
        else {
            p[1].first = s;
            p[1].second++;
        }
    }

    if (p[0].second > p[1].second)
        cout << p[0].first << '\n';
    else
        cout << p[1].first << '\n';
}