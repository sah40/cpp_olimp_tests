#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum{0};
    cin >> n;
    string strs[n];

    for (int k = 0; k < n; ++k) {
        cin >> strs[k];
        if (strs[k] == "Tetrahedron") sum += 4;
        if (strs[k] == "Cube") sum += 6;
        if (strs[k] == "Octahedron") sum += 8;
        if (strs[k] == "Dodecahedron") sum += 12;
        if (strs[k] == "Icosahedron") sum += 20;
    }
    cout << sum << '\n';
}