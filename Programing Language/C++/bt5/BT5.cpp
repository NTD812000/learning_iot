#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    float sum = 1;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }

    cout << sum;
}
