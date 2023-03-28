#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum = 0;

//    cin >> n;

    n = 10000000;

    // ~ n = 100000 - 10s - 100000
//    for (int i = 1; i <= n; i++)
//    {
//        float temp_sum = 0;
//        for (int j = 1; j <= i; j++)
//        {
//            temp_sum += j;
//        }
//        sum += 1.0 / temp_sum;
//    }

    // 1-for
    // ~ n = 100000 - 0.028s
    int mau = 0;
    for (int i=1; i<=n; i++) {
        mau += i;
        sum += 1.0 / mau;
    }

    cout << sum + 1 << endl;

    return 0;
}
