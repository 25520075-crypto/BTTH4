#include "cSoPhuc.h"

cSoPhuc::cSoPhuc(float thuc, float ao) {
    iThuc = thuc;
    iAo = ao;
}

cSoPhuc cSoPhuc::operator + (const cSoPhuc& sp) {
    return cSoPhuc(iThuc + sp.iThuc, iAo + sp.iAo);
}

cSoPhuc cSoPhuc::operator - (const cSoPhuc& sp) {
    return cSoPhuc(iThuc - sp.iThuc, iAo - sp.iAo);
}

cSoPhuc cSoPhuc::operator * (const cSoPhuc& sp) {
    return cSoPhuc(
        iThuc * sp.iThuc - iAo * sp.iAo,
        iThuc * sp.iAo + iAo * sp.iThuc
    );
}

cSoPhuc cSoPhuc::operator / (const cSoPhuc& sp) {
    float mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;

    return cSoPhuc(
        (iThuc * sp.iThuc + iAo * sp.iAo) / mau,
        (iAo * sp.iThuc - iThuc * sp.iAo) / mau
    );
}

bool cSoPhuc::operator == (const cSoPhuc& sp) {
    return (iThuc == sp.iThuc && iAo == sp.iAo);
}

bool cSoPhuc::operator != (const cSoPhuc& sp) {
    return !(*this == sp);
}

istream& operator >> (istream& in, cSoPhuc& sp) {
    cout << "Nhap phan thuc: ";
    in >> sp.iThuc;

    cout << "Nhap phan ao: ";
    in >> sp.iAo;

    return in;
}

ostream& operator << (ostream& out, cSoPhuc sp) {
    out << sp.iThuc;

    if (sp.iAo >= 0)
        out << " + " << sp.iAo << "i";
    else
        out << " - " << -sp.iAo << "i";

    return out;
}
