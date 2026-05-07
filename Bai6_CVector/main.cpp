#include <iostream>
#include "CVector.h"
using namespace std;

int main() {

    CVector a, b;

    cout << "Nhap vector a:\n";
    cin >> a;

    cout << "\nNhap vector b:\n";
    cin >> b;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    cout << "\n\na + b = " << a + b;
    cout << "\na - b = " << a - b;

    cout << "\nTich vo huong = "
         << a.TichVoHuong(b);

    return 0;
}
