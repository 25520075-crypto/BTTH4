#include <iostream>
#include "CTime.h"
using namespace std;

int main() {
    CTime t;

    cout << "Nhap thoi gian:\n";
    cin >> t;

    cout << "\nThoi gian vua nhap: " << t;

    cout << "\n\nCong 500 giay: ";
    cout << t + 500;

    cout << "\nTru 100 giay: ";
    cout << t - 100;

    ++t;
    cout << "\n\nSau ++t: " << t;

    --t;
    cout << "\nSau --t: " << t;

    return 0;
}
