#pragma once
#include <iostream>
using namespace std;

class CVector;

class CMatrix {
private:
    int dong, cot;
    float a[100][100];

public:
    CMatrix(int d = 0, int c = 0);

    friend istream& operator>>(istream& in, CMatrix& mt);
    friend ostream& operator<<(ostream& out, CMatrix mt);

    CMatrix operator+(const CMatrix& mt);
    CMatrix operator-(const CMatrix& mt);
    CMatrix operator*(const CMatrix& mt);
};
