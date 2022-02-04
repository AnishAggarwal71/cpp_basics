#include <iostream>
using namespace std;

int factorial(int num)
{

    int fac = 1;

    for (int i = 2; i <=  num; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    int n, r;
    cin >> n >> r;

    int ans = factorial(n) / (factorial(r) * factorial(n - r));

    cout << ans << endl;
    return 0;
}