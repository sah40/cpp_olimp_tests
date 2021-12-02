#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string strs[n];
    for (int k = 0; k < n; ++k) {
        int size, it;
        cin >> size >> it >> strs[k];
        for (int j = 0; j < it; ++j) {
            for (int l = 1; l < size - 1; ++l) {
                if (strs[k][1] == '1')
                    strs[k][0] = '1';
                if (strs[k][size - 2] == '1')
                    strs[k][size - 1] = '1';
                if (strs[k][l - 1] == '1' && strs[k][l + 1] == '0')
                    strs[k][l] = '1';
                else if (strs[k][l - 1] == '0' && strs[k][l + 1] == '1')
                    strs[k][l] = '1';
            }
        }
    }
    for (auto& a : strs)
        cout << a << '\n';
}
