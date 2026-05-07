#include "CDate.h"

CDate::CDate(int n, int t, int y) {
    ngay = n;
    thang = t;
    nam = y;
}

bool CDate::NamNhuan() {
    return (nam % 400 == 0 ||
           (nam % 4 == 0 && nam % 100 != 0));
}

int CDate::SoNgayTrongThang() {
    int ngayThang[] =
    {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (thang == 2 && NamNhuan())
        return 29;

    return ngayThang[thang];
}

CDate CDate::operator + (int x) {
    CDate kq = *this;

    while (x--) {
        kq.ngay++;

        if (kq.ngay > kq.SoNgayTrongThang()) {
            kq.ngay = 1;
            kq.thang++;

            if (kq.thang > 12) {
                kq.thang = 1;
                kq.nam++;
            }
        }
    }

    return kq;
}

CDate CDate::operator - (int x) {
    CDate kq = *this;

    while (x--) {
        kq.ngay--;

        if (kq.ngay < 1) {
            kq.thang--;

            if (kq.thang < 1) {
                kq.thang = 12;
                kq.nam--;
            }

            kq.ngay = kq.SoNgayTrongThang();
        }
    }

    return kq;
}

int CDate::operator - (CDate d) {
    CDate temp = d;
    int dem = 0;

    while (!(temp.ngay == ngay &&
             temp.thang == thang &&
             temp.nam == nam)) {
        ++temp;
        dem++;
    }

    return dem;
}

CDate CDate::operator ++ () {
    *this = *this + 1;
    return *this;
}

CDate CDate::operator -- () {
    *this = *this - 1;
    return *this;
}

istream& operator >> (istream& in, CDate& d) {
    cout << "Nhap ngay: ";
    in >> d.ngay;

    cout << "Nhap thang: ";
    in >> d.thang;

    cout << "Nhap nam: ";
    in >> d.nam;

    return in;
}

ostream& operator << (ostream& out, CDate d) {
    if (d.ngay < 10) out << "0";
    out << d.ngay << "/";

    if (d.thang < 10) out << "0";
    out << d.thang << "/";

    out << d.nam;

    return out;
}
