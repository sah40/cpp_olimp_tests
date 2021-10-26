#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int amount;
    string str;
    cin >> amount >> str;
    unsigned int toRemove{0};
    for (int k = 0; k < amount; ++k) {
        if (str[k] == str[k - 1])
            ++toRemove;
    }
    cout << toRemove << '\n';
}