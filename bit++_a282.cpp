#include <iostream>
#include <string>
using namespace std;
int main() {
    int turns, number{0};
    cin >> turns;
    for (int k = 0; k < turns; ++k) {
        string value;
        cin >> value;
        if (value == "++X" || value == "X++") {
            number++;
        } else if (value == "--X" || value == "X--") {
            number--;
        }
    }
    cout << number << '\n';
}