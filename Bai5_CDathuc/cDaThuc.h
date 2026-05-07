#pragma once
#include <iostream>
using namespace std;

class cDaThuc {
private:
    int bac;
    float heSo[100];

public:
    cDaThuc(int b = 0);
    ~cDaThuc();

    float TinhGiaTri(float x);

    cDaThuc operator + (const cDaThuc& dt);
    cDaThuc operator - (const cDaThuc& dt);
    cDaThuc operator * (const cDaThuc& dt);

    friend istream& operator >> (istream& in, cDaThuc& dt);
    friend ostream& operator << (ostream& out, cDaThuc dt);
};
