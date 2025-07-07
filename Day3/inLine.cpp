//
// Created by 武侍 on 2025/7/5.
//
#include "iostream"
using namespace std;
inline double CalArea(double radius);
int main(){
    double r(3.0);
    double area;
    area = CalArea(r);
    cout << area << endl;

    return 0;
}

inline double CalArea(double radius){
    return 3.14* radius * radius;
}