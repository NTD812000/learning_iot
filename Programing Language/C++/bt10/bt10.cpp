#include <iostream>
using namespace std;

int main() {
    int x, n, T=1;
    cin >> x;
    cin >> n;

    for(int i=1; i<=n; i++) {
      T *= x;  //Làm T = T * x n lần để tính x^n
    }

    cout << T;
}
