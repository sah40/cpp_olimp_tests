#include <iostream>
using namespace std;
int main() {
    int n, hZab;
    cin >> n >> hZab;

    int all_h[n], width{n};
    for (int k = 0; k < n; ++k) {
        cin >> all_h[k];
    }
    for (int j = 0; j < n; ++j) {
        if (all_h[j] > hZab) {
            ++width;
        }
    }
    cout << width << '\n';
}