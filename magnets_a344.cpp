#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, groups{1};
    cin >> n;
    int magnets[n];
    for (int a = 0; a < n; ++a)
        cin >> magnets[a];

    for (int k = 1; k < n; ++k) {
        if (magnets[k] != magnets[k - 1]) {
            ++groups;
        }
    }
    cout << groups << '\n';
}