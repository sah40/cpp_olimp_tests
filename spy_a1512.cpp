#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> res(n);

    for (int k = 0; k < n; ++k) {
        int s;
        cin >> s;
        vector<int> arr(s);
        for (int j = 0; j < arr.size(); ++j)
            cin >> arr.at(j);

        for (int j = 0; j < arr.size(); ++j) {
            if (arr.at(j) != arr.at(s / 2)) {
                if (j <= 1) {
                    if (arr.at(j) != arr[arr.size() - 1])
                        res.at(k) = j + 1;
                } else {
                    if (arr.at(j) != arr[arr.size() + 1])
                        res.at(k) = j + 1;
                }
            }
        }
    }

    for (int k = 0; k < n; ++k) {
        cout << res.at(k) << '\n';
    }
}