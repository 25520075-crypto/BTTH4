#pragma once
#include <iostream>
using namespace std;

class CVector {
private:
    int n;
    float a[100];

public:
    CVector(int n = 0);

    friend istream& operator>>(istream& in, CVector& v);
    friend ostream& operator<<(ostream& out, CVector v);

    CVector operator+(const CVector& v);
    CVector operator-(const CVector& v);

    float TichVoHuong(const CVector& v);
};
