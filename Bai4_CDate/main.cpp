#include <iostream>
#include "CDate.h"
using namespace std;

int main() {
    CDate d1, d2;

    cout << "Nhap ngay d1:\n";
    cin >> d1;

    cout << "\nNhap ngay d2:\n";
    cin >> d2;

    cout << "\nd1 = " << d1;
    cout << "\nd2 = " << d2;

    cout << "\n\nCong 10 ngay: " << d1 + 10;
    cout << "\nTru 5 ngay: " << d1 - 5;

    ++d1;
    cout << "\n\nSau ++d1: " << d1;

    --d1;
    cout << "\nSau --d1: " << d1;

    cout << "\n\nKhoang cach giua 2 ngay: ";
    cout << d2 - d1 << " ngay";

    return 0;
}
