#include "cDaThuc.h"
#include <cmath>

cDaThuc::cDaThuc(int b) {
    bac = b;

    for (int i = 0; i < 100; i++)
        heSo[i] = 0;
}

cDaThuc::~cDaThuc() {

}

float cDaThuc::TinhGiaTri(float x) {

    float tong = 0;

    for (int i = 0; i <= bac; i++) {
        tong += heSo[i] * pow(x, i);
    }

    return tong;
}

istream& operator >> (istream& in, cDaThuc& dt) {

    cout << "Nhap bac da thuc: ";
    in >> dt.bac;

    for (int i = dt.bac; i >= 0; i--) {
        cout << "He so x^" << i << ": ";
        in >> dt.heSo[i];
    }

    return in;
}

ostream& operator << (ostream& out, cDaThuc dt) {

    for (int i = dt.bac; i >= 0; i--) {

        out << dt.heSo[i];

        if (i > 0)
            out << "x^" << i << " + ";
    }

    return out;
}

cDaThuc cDaThuc::operator + (const cDaThuc& dt) {

    int maxBac =
        (bac > dt.bac) ? bac : dt.bac;

    cDaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {

        float a =
            (i <= bac) ? heSo[i] : 0;

        float b =
            (i <= dt.bac) ? dt.heSo[i] : 0;

        kq.heSo[i] = a + b;
    }

    return kq;
}

cDaThuc cDaThuc::operator - (const cDaThuc& dt) {

    int maxBac =
        (bac > dt.bac) ? bac : dt.bac;

    cDaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {

        float a =
            (i <= bac) ? heSo[i] : 0;

        float b =
            (i <= dt.bac) ? dt.heSo[i] : 0;

        kq.heSo[i] = a - b;
    }

    return kq;
}

cDaThuc cDaThuc::operator * (const cDaThuc& dt) {

    cDaThuc kq(bac + dt.bac);

    for (int i = 0; i <= bac; i++) {

        for (int j = 0; j <= dt.bac; j++) {

            kq.heSo[i + j] +=
                heSo[i] * dt.heSo[j];
        }
    }

    return kq;
}
