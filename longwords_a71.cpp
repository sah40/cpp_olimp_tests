#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> words(N);
    for (int k{0}; k < N; ++k) {
        cin >> words.at(k);
    }
    for (int k{0}; k < N; ++k) {
        if (words.at(k).length() <= 10) {
            cout << words.at(k) << '\n';
        } else {
            cout << words.at(k)[0] << (words.at(k).length() - 2) << words.at(k)[words.at(k).length() - 1] << '\n';
        }
    }
}