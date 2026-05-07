#include "CVector.h"

CVector::CVector(int n) {
    this->n = n;

    for (int i = 0; i < 100; i++)
        a[i] = 0;
}

istream& operator>>(istream& in, CVector& v) {

    cout << "Nhap so chieu: ";
    in >> v.n;

    for (int i = 0; i < v.n; i++) {
        cout << "a[" << i << "] = ";
        in >> v.a[i];
    }

    return in;
}

ostream& operator<<(ostream& out, CVector v) {

    out << "(";

    for (int i = 0; i < v.n; i++) {

        out << v.a[i];

        if (i != v.n - 1)
            out << ", ";
    }

    out << ")";

    return out;
}

CVector CVector::operator+(const CVector& v) {

    CVector kq(n);

    for (int i = 0; i < n; i++) {
        kq.a[i] = a[i] + v.a[i];
    }

    return kq;
}

CVector CVector::operator-(const CVector& v) {

    CVector kq(n);

    for (int i = 0; i < n; i++) {
        kq.a[i] = a[i] - v.a[i];
    }

    return kq;
}

float CVector::TichVoHuong(const CVector& v) {

    float tong = 0;

    for (int i = 0; i < n; i++) {
        tong += a[i] * v.a[i];
    }

    return tong;
}
