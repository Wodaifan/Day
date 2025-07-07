//
// Created by 武侍 on 2025/7/7.
//
#include "iostream"
using namespace std;
class A{
public:
    static void f(A a);

private:
    int x;
};

void A::f(A a){
    cout << a.x;
}

int main(){
    A a;
    a.f(A());
    return 0;
}
