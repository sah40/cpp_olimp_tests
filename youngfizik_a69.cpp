#include <iostream>
using namespace std;
int main() {
    int y, x{3};
    cin >> y;

    int vectors[y][x];
    for (int k = 0; k < y; ++k) {
        for (int j = 0; j < x; ++j) {
            cin >> vectors[k][j];
        }
    }

    int r_x{0}, r_y{0}, r_z{0};
    for (int k = 0; k < y; ++k) {
        r_x += vectors[k][0];
        r_y += vectors[k][1];
        r_z += vectors[k][2];
    }

    if (r_x == 0 && r_y == 0 && r_z == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}