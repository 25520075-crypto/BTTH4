#pragma once
#include <iostream>
using namespace std;

class cPhanSo {
private:
    int tu, mau;

public:
    cPhanSo(int t = 0, int m = 1);

    void RutGon();

    cPhanSo operator + (const cPhanSo& ps);
    cPhanSo operator - (const cPhanSo& ps);
    cPhanSo operator * (const cPhanSo& ps);
    cPhanSo operator / (const cPhanSo& ps);

    bool operator == (const cPhanSo& ps);
    bool operator > (const cPhanSo& ps);
    bool operator < (const cPhanSo& ps);

    friend istream& operator >> (istream& in, cPhanSo& ps);
    friend ostream& operator << (ostream& out, cPhanSo ps);
};
