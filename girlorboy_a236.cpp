#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string name, smbls;
    smbls.resize(26);
    int num_smbls[26], uniqueChar{0};
    cin >> name;
    for (int k = 0; k < 26; ++k) {
        smbls[k] = (k + 97);
        num_smbls[k] = 0;
    }
    for (int k = 0; k < name.size(); ++k) {
        ++num_smbls[smbls.find(name[k])];
    }
    for (int k = 0; k < 26; ++k) {
        if (num_smbls[k] > 0) {
            ++uniqueChar;
        }
    }
    if ((uniqueChar % 2) == 0) {
        cout << "CHAT WITH HER!" << '\n';
    } else {
        cout << "IGNORE HIM!" << '\n';
    }
}