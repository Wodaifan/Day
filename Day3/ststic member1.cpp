//
// Created by 武侍 on 2025/7/7.
//
#include "iostream"

using namespace std;

class Application {
public:
    static void f();

    static void g();

private:
    static int global;
};
int Application::global = 0;
void Application::f() {global  =5;}
void Application::g() {cout << global << endl;}

int main(){
    Application::f();
    Application::g();

    return 0;
}
