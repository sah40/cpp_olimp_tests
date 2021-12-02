#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, oz = 1;
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; ++k) {
        cin >> arr[k];
    }

    for (int k = 1; k < n; ++k) {
        if (arr[k - 1] < arr[k])
            ++oz;
    }
    cout << oz << '\n';
}