#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long int price, dollars, amount, totalprice{0};
    cin >> price >> dollars >> amount;

    for (int k = 1; k < (amount + 1); ++k)
        totalprice += (price * k);

    if ((dollars - totalprice) < 0) {
        cout << (dollars - totalprice) * -1 << '\n';
    } else {
        cout << 0 << '\n';
    }
}