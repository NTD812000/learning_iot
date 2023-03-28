#include <iostream>
using namespace std;

int main() {
    float x, T=1;
    int n, i;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    for(i=1; i<=n; i++) {
      T *= x;  //Làm T = T * x n lần để tính x^n
    }

    cout << "T(x, n) = " << T;

    return 0;
}
