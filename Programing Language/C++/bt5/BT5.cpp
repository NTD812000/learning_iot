#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 1;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }

    cout << "Tong S(n) = " << sum;

    return 0;
}
