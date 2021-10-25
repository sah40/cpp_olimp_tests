#include <iostream>
#include <vector>
#include <algorithm>
typedef unsigned int uint;
using namespace std;
int main() {
    int n_uch, bigger_than, winners{0};
    cin >> n_uch >> bigger_than;

    vector<int> places(n_uch);
    for (int k{0}; k < n_uch; ++k) {
        cin >> places.at(k);
    }
    for (int k{0}; k < n_uch; ++k) {
        if (places.at(k) > 0 && places.at(k) >= places.at(bigger_than - 1)) {
            winners++;
        }
    }
    cout << winners << '\n';
}