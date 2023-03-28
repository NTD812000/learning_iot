#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum = 0;

    cout << "Nhap vao so n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        float temp_sum = 0;
        for (int j = 1; j <= i; j++)
        {
            temp_sum += j;
        }
        sum += 1.0 / temp_sum;
    }

    cout << "Tong S(n) la: " << sum + 1 << endl;

    return 0;
}
