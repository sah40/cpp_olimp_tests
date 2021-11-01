#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], result[n];
    for (int k = 0; k < n; ++k) {
        cin >> arr[k];
    }
    sort(arr, arr + n);
    for (int k = 0; k < n; ++k) {
        cout << arr[k] << ' ';
    }
    cout << '\n';
}