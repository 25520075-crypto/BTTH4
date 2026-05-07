#pragma once
#include <iostream>
using namespace std;

class CTime {
private:
    int gio, phut, giay;

public:
    CTime(int g = 0, int p = 0, int s = 0);

    void ChuanHoa();

    CTime operator + (int x);
    CTime operator - (int x);

    CTime operator ++ ();
    CTime operator -- ();

    friend istream& operator >> (istream& in, CTime& t);
    friend ostream& operator << (ostream& out, CTime t);
};
