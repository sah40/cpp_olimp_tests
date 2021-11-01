#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//"A", "O", "Y", "E", "U", "I"
const vector<char> vowel{'a', 'o', 'y', 'e', 'u', 'i'};
int main() {
    string str, r = ".";
    cin >> str;
    for (int k = 0; k < str.length(); ++k) {
        if (str[k] < 97)
            str[k] += 32;
        if ((find(vowel.begin(), vowel.end(), str[k]) == vowel.end())) {
            r += str[k];
            r += '.';
        }
    }
    r.erase(r.length() - 1);
    cout << r << '\n';
}