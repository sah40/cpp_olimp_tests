#include <iostream>
using namespace std;
int main() {
    int _num;
    cin >> _num;
    cout << (_num % 4 == 0 || _num % 7 == 0 || _num % 47 == 0 || _num % 74 == 0 || _num % 477 == 0 ? "YES" : "NO") << '\n';
}