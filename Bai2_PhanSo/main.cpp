#include <iostream>
#include "cPhanSo.h"
using namespace std;

int main() {
    cPhanSo a, b;

    cout << "Nhap phan so a:\n";
    cin >> a;

    cout << "\nNhap phan so b:\n";
    cin >> b;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    cout << "\n\na + b = " << a + b;
    cout << "\na - b = " << a - b;
    cout << "\na * b = " << a * b;
    cout << "\na / b = " << a / b;

    if (a == b)
        cout << "\nHai phan so bang nhau";

    if (a > b)
        cout << "\na lon hon b";

    if (a < b)
        cout << "\na nho hon b";

    return 0;
}
