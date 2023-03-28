#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap vao mot so nguyen duong n: ";
    cin >> n;

    cout << "Cac uoc so cua " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
