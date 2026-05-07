#include "cPhanSo.h"
#include <cmath>

int UCLN(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

cPhanSo::cPhanSo(int t, int m) {
    tu = t;
    mau = m;
}

void cPhanSo::RutGon() {
    int ucln = UCLN(tu, mau);

    tu /= ucln;
    mau /= ucln;

    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
}

cPhanSo cPhanSo::operator + (const cPhanSo& ps) {
    cPhanSo kq(
        tu * ps.mau + ps.tu * mau,
        mau * ps.mau
    );

    kq.RutGon();
    return kq;
}

cPhanSo cPhanSo::operator - (const cPhanSo& ps) {
    cPhanSo kq(
        tu * ps.mau - ps.tu * mau,
        mau * ps.mau
    );

    kq.RutGon();
    return kq;
}

cPhanSo cPhanSo::operator * (const cPhanSo& ps) {
    cPhanSo kq(
        tu * ps.tu,
        mau * ps.mau
    );

    kq.RutGon();
    return kq;
}

cPhanSo cPhanSo::operator / (const cPhanSo& ps) {
    cPhanSo kq(
        tu * ps.mau,
        mau * ps.tu
    );

    kq.RutGon();
    return kq;
}

bool cPhanSo::operator == (const cPhanSo& ps) {
    return (tu * ps.mau == ps.tu * mau);
}

bool cPhanSo::operator > (const cPhanSo& ps) {
    return (tu * ps.mau > ps.tu * mau);
}

bool cPhanSo::operator < (const cPhanSo& ps) {
    return (tu * ps.mau < ps.tu * mau);
}

istream& operator >> (istream& in, cPhanSo& ps) {
    cout << "Nhap tu so: ";
    in >> ps.tu;

    cout << "Nhap mau so: ";
    in >> ps.mau;

    return in;
}

ostream& operator << (ostream& out, cPhanSo ps) {
    ps.RutGon();

    out << ps.tu << "/" << ps.mau;
    return out;
}
