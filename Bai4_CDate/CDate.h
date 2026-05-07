#pragma once
#include <iostream>
using namespace std;

class CDate {
private:
    int ngay, thang, nam;

public:
    CDate(int n = 1, int t = 1, int y = 2000);

    bool NamNhuan();
    int SoNgayTrongThang();

    CDate operator + (int x);
    CDate operator - (int x);

    int operator - (CDate d);

    CDate operator ++ ();
    CDate operator -- ();

    friend istream& operator >> (istream& in, CDate& d);
    friend ostream& operator << (ostream& out, CDate d);
};
