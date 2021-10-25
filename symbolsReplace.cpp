#include <iostream>
#include <string>
using namespace std;

int main() {
    size_t turns;
    int a{0}, b{0}, c{0};
    string str;
    cin >> str >> turns;
    for (; turns > 1; --turns) {
        int i{0};
        for (int k = 0; k < (str.size() - i); ++k) {
            if (str[k] == 'a') {
                str[k] = 'b';
            } else if (str[k] == 'b') {
                str[k] = 'c';
            } else {
                ++i;
                str[k] = 'a';
                str += 'b';
            }
        }
    }
    for (int k = 0; k < (str.size()); ++k) {
        if (str[k] == 'a') {
            b++;
        } else if (str[k] == 'b') {
            c++;
        } else {
            a++;
            b++;
        }
    }
    cout << a << ' ' << b << ' ' << c << '\n';
}

/* 
    дана строка и колво ходов 
    строка состоит из а б с
    если а, тогда б
    если б, тогда с
    если с, тогда аб
    аббса 2
    1 ход бссабб
    2 ход сабаббсс
*/