//
// Created by ÎäÊÌ on 2025/7/5.
//
#include "iostream"

using namespace std;

int f(int n, int k);

int main() {
    cout << "ÇëÊäÈënÓëk" << endl;
    int n, k;
    cin >> n;
    cin >> k;
    cout << f(n, k) << endl;
    return 0;
}

int f(int n, int k) {
    if ((n == k) || (k == 0)) {
        return 1;
    } else {
        return f(n - 1, k - 1) + f(n - 1, k);
    }
}