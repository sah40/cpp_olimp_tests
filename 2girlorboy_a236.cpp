#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string name;
    int n{0};
    cin >> name;
    sort(name.begin(), name.end());
    for (int k = 1; k < name.length(); ++k) {
        if (name[k] != name[k - 1]) {
            ++n;
        }
    }
    cout << n << '\n';
}