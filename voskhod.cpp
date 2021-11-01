#include <iostream>
using namespace std;
int main() {
    int n, v{1}, current;
    cin >> n;
    int arr[n];

    for (int k = 0; k < n; ++k)
        cin >> arr[k];

    current = arr[0];
    for (int k = 1; k < n; ++k) {
        if (current < arr[k]) {
            current = arr[k];
            ++v;
        }
    }
    cout << v << '\n';
}
