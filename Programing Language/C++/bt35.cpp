#include <bits/stdc++.h>

using namespace std;

double tinh_can(int n) {
    double res = 0;

    for (int i=n; i>=1; i--) {
        res += i;
        res = sqrt(res);
    }

    return res;
}

double tinh_can_2(int i, int n) {
    if (i == n) {
        return sqrt(n);
    }
    else {
        return sqrt(i + tinh_can_2(i + 1, n));
    }
}

int main() {

    int n;
    cin >> n;
    cout << tinh_can_2(1, n);
}
