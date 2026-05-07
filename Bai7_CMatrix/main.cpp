#include <iostream>
#include "CMatrix.h"
using namespace std;

int main() {

    CMatrix a, b;

    cout << "Nhap ma tran a:\n";
    cin >> a;

    cout << "\nNhap ma tran b:\n";
    cin >> b;

    cout << "\nMa tran a:\n" << a;
    cout << "\nMa tran b:\n" << b;

    cout << "\nTong:\n";
    cout << a + b;

    cout << "\nHieu:\n";
    cout << a - b;

    cout << "\nTich:\n";
    cout << a * b;

    return 0;
}
