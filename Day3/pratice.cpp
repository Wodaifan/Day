//
// Created by Œ‰ Ã on 2025/7/5.
//
#include "iostream"

using namespace std;
const float PI = 3.14159;
const float FencePrice = 35;
const float ConcreatePrice = 20;

class Circle {
private:
    float radius;

public:
    Circle(float r);

    float Circumference() const;

    float Area() const;
};

Circle::Circle(float r) {
    radius = r;
}

float Circle::Circumference() const { return 2 * PI * radius; };

float Circle::Area() const { return PI * radius * radius; }

int main(){
    float radius;
    float FenceCost,ConcreateCost;

    cout << "Enter the radius of the pool:";
    cin >> radius;
    Circle Pool(radius);
    Circle PoolRim(radius + 3);
    FenceCost = PoolRim.Circumference() * FencePrice;
    cout << "Fencing Cost is £§" << FenceCost << endl;

    ConcreateCost = (PoolRim.Area() - Pool.Area()) * FencePrice;
    cout << "Concrete Cost is £§" << ConcreateCost << endl;
}