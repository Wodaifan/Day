//
// Created by 武侍 on 2025/7/5.
//
#include "iostream"

using namespace std;

int f(int n);

int main() {
    cout << "input x:";
    int x;
    cin >> x;
    cout << f(x) << endl;

    return 0;
}

int f(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * f(n - 1);
    }
}