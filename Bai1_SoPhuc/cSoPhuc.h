#pragma once
#include <iostream>
using namespace std;

class cSoPhuc {
private:
    float iThuc;
    float iAo;

public:
    cSoPhuc(float thuc = 0, float ao = 0);

    cSoPhuc operator + (const cSoPhuc& sp);
    cSoPhuc operator - (const cSoPhuc& sp);
    cSoPhuc operator * (const cSoPhuc& sp);
    cSoPhuc operator / (const cSoPhuc& sp);

    bool operator == (const cSoPhuc& sp);
    bool operator != (const cSoPhuc& sp);

    friend istream& operator >> (istream& in, cSoPhuc& sp);
    friend ostream& operator << (ostream& out, cSoPhuc sp);
};
