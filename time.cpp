#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    string in, f, s;
    cin >> in;
    if (in[0] == '2' && in[1] == '3') {
        return 0;
    } else if (in[0] == in[4] && in[1] == in[3]) {
        f = {in[0], in[1]};
        s = {in[3], in[4]};
    } else {
        return 0;
    }

    int a{(stoi(f)) + 1},
        b{(stoi(s)) + 10};

    cout << a << ':' << b << '\n';
}