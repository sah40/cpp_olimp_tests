#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct game {
   private:
    int cols;
    vector<int> row1, row2;

   public:
    void setData() {
        string str1, str2;
        cin >> cols >> str1 >> str2;
        row1.resize(cols);
        row2.resize(cols);
        for (int k = 0; k < cols; ++k) {
            row1[k] = (str1.at(k) - 48);
            row2[k] = (str2.at(k) - 48);
        }
    }

    bool isVictorious() {
        int pos1{0}, pos2{0};
        for (int k = 0; (pos1 + 1) != cols || (pos2 + 1) != cols; ++k) {
            if (row1.at(k + 1) == 0 || row2.at(k + 1) == 0) {
                ++pos1;
                ++pos2;
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int numOfFields;
    cin >> numOfFields;

    game fields[numOfFields];
    for (int k = 0; k < numOfFields; ++k) {
        fields[k].setData();
    }
    for (int k = 0; k < numOfFields; ++k) {
        if (fields[k].isVictorious())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}