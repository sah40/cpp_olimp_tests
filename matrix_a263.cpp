#include <iostream>
using namespace std;
int main() {
    int mat[5][5];
    int turns{0}, pos_x, pos_y;
    for (int k = 0; k < 5; ++k) {
        for (int j = 0; j < 5; ++j) {
            cin >> mat[k][j];
            if (mat[k][j] == 1) {
                pos_x = j;
                pos_y = k;
            }
        }
    }

    while (pos_y == 2 && pos_x == 2) {
        /*      y        */
        if (pos_y < 2) {
            ++pos_y;
            ++turns;
        }
        if (pos_y > 2) {
            --pos_y;
            ++turns;
        }

        /*      x        */
        if (pos_x < 2) {
            ++pos_x;
            ++turns;
        }
        if (pos_x > 2) {
            --pos_x;
            ++turns;
        }
    }
    cout << turns << '\n';
}