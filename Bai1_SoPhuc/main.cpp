#include <iostream>
#include "cSoPhuc.h"
using namespace std;

int main() {
    cSoPhuc a, b;

    cout << "Nhap so phuc a:\n";
    cin >> a;

    cout << "\nNhap so phuc b:\n";
    cin >> b;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    cout << "\n\na + b = " << a + b;
    cout << "\na - b = " << a - b;
    cout << "\na * b = " << a * b;
    cout << "\na / b = " << a / b;

    if (a == b)
        cout << "\nHai so phuc bang nhau";
    else
        cout << "\nHai so phuc khac nhau";

    return 0;
}
