#include "CMatrix.h"

CMatrix::CMatrix(int d, int c) {

    dong = d;
    cot = c;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            a[i][j] = 0;
        }
    }
}

istream& operator>>(istream& in, CMatrix& mt) {

    cout << "Nhap so dong: ";
    in >> mt.dong;

    cout << "Nhap so cot: ";
    in >> mt.cot;

    for (int i = 0; i < mt.dong; i++) {

        for (int j = 0; j < mt.cot; j++) {

            cout << "a[" << i << "][" << j << "] = ";
            in >> mt.a[i][j];
        }
    }

    return in;
}

ostream& operator<<(ostream& out, CMatrix mt) {

    for (int i = 0; i < mt.dong; i++) {

        for (int j = 0; j < mt.cot; j++) {

            out << mt.a[i][j] << " ";
        }

        out << endl;
    }

    return out;
}

CMatrix CMatrix::operator+(const CMatrix& mt) {

    CMatrix kq(dong, cot);

    for (int i = 0; i < dong; i++) {

        for (int j = 0; j < cot; j++) {

            kq.a[i][j] = a[i][j] + mt.a[i][j];
        }
    }

    return kq;
}

CMatrix CMatrix::operator-(const CMatrix& mt) {

    CMatrix kq(dong, cot);

    for (int i = 0; i < dong; i++) {

        for (int j = 0; j < cot; j++) {

            kq.a[i][j] = a[i][j] - mt.a[i][j];
        }
    }

    return kq;
}

CMatrix CMatrix::operator*(const CMatrix& mt) {

    CMatrix kq(dong, mt.cot);

    for (int i = 0; i < dong; i++) {

        for (int j = 0; j < mt.cot; j++) {

            for (int k = 0; k < cot; k++) {

                kq.a[i][j] +=
                    a[i][k] * mt.a[k][j];
            }
        }
    }

    return kq;
}
