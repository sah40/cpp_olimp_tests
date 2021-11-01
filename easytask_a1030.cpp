#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int i;
    cin >> i;
    int arr[i];
    bool h = true;
    for (int k = 0; k < i; ++k) {
        cin >> arr[k];
        if (arr[k] == 1) {
            h = false;
            break;
        }
    }
    if (h)
        cout << "EASY\n";
    else
        cout << "HARD\n";
}