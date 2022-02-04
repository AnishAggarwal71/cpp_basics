//Prime number between 2 numbers.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter 2 numbers: ";
//     cin >> a >> b;
//     for (int num = a; num <= b; num++)
//     {
//         int i;
//         for (i = 2; i < num; i++)
//         {
//             if (num % i == 0)
//             { //it is not prime
//                 break;
//             }
//         }
//         if (i == num)
//         { //loop has completed all iterations
//             cout << num << endl;
//         }
//     }
//}

//To find if a given number is prime or not
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime" << endl;
    }
    return 0;
}