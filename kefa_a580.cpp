#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, days{1};
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; ++k) {
        cin >> arr[k];
    }

    int longest = 1;
    for (int k = 0; k < n - 1; ++k) {
        if (arr[k] <= arr[k + 1])
            ++days;
        else {
            if (longest < days)
                longest = days;
            days = 1;
        }
        if (days > longest)
            longest = days;
    }

    cout << longest << '\n';
}