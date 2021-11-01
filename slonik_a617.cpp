#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int distance, steps{0};
    cin >> distance;
    while (distance != 0) {
        if (distance >= 5) {
            distance -= 5;
            ++steps;
        } else if (distance >= 4) {
            distance -= 4;
            ++steps;

        } else if (distance >= 3) {
            distance -= 3;
            ++steps;

        } else if (distance >= 2) {
            distance -= 2;
            ++steps;

        } else if (distance >= 1) {
            distance -= 1;
            ++steps;
        }
    }
    cout << steps << '\n';
}