#include <iostream>
using namespace std;

int factorial(int num)
{
    int fac = 1;

    for (int i = 2; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}

int combination(int n, int r)
{
    int ans = factorial(n) / (factorial(r) * factorial(n - r));

    return ans;
}

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}