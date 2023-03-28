#include <bits/stdc++.h>

using namespace std;

bool kiem_tra_so_hoan_thien(int n) {
    int tong_uoc = 0;

    for (int i=1; i<n; i++) {
        if (n % i == 0) {
            tong_uoc += i;
        }
    }

    return (tong_uoc == n);
}

int main() {
    int n;
    cin >> n;

    cout << kiem_tra_so_hoan_thien(n);
}
