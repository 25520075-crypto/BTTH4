#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main() {

    cDaThuc a, b;

    cout << "Nhap da thuc a:\n";
    cin >> a;

    cout << "\nNhap da thuc b:\n";
    cin >> b;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    cout << "\n\na + b = " << a + b;
    cout << "\na - b = " << a - b;
    cout << "\na * b = " << a * b;

    float x;

    cout << "\n\nNhap x: ";
    cin >> x;

    cout << "Gia tri a(x) = "
         << a.TinhGiaTri(x);

    return 0;
}
