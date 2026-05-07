#include "CTime.h"

CTime::CTime(int g, int p, int s) {
    gio = g;
    phut = p;
    giay = s;
}

void CTime::ChuanHoa() {
    while (giay >= 60) {
        giay -= 60;
        phut++;
    }

    while (phut >= 60) {
        phut -= 60;
        gio++;
    }

    while (gio >= 24) {
        gio -= 24;
    }

    while (giay < 0) {
        giay += 60;
        phut--;
    }

    while (phut < 0) {
        phut += 60;
        gio--;
    }

    while (gio < 0) {
        gio += 24;
    }
}

CTime CTime::operator + (int x) {
    CTime kq(gio, phut, giay);

    kq.giay += x;
    kq.ChuanHoa();

    return kq;
}

CTime CTime::operator - (int x) {
    CTime kq(gio, phut, giay);

    kq.giay -= x;
    kq.ChuanHoa();

    return kq;
}

CTime CTime::operator ++ () {
    giay++;
    ChuanHoa();

    return *this;
}

CTime CTime::operator -- () {
    giay--;
    ChuanHoa();

    return *this;
}

istream& operator >> (istream& in, CTime& t) {
    cout << "Nhap gio: ";
    in >> t.gio;

    cout << "Nhap phut: ";
    in >> t.phut;

    cout << "Nhap giay: ";
    in >> t.giay;

    t.ChuanHoa();

    return in;
}

ostream& operator << (ostream& out, CTime t) {
    if (t.gio < 10) out << "0";
    out << t.gio << ":";

    if (t.phut < 10) out << "0";
    out << t.phut << ":";

    if (t.giay < 10) out << "0";
    out << t.giay;

    return out;
}
