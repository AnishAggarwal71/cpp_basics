#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal()
{
    cout << "Enter a binary number\n";
    int number;
    cin >> number;

    int ans = 0;
    int x = 1;
    while (number > 0)
    {
        int y = number % 10;
        ans += x * y;
        x *= 2;
        number /= 10;
    }
    return ans;
}

int octalToDecimal()
{
    cout << "Enter a octal number\n";
    int number;
    cin >> number;

    int ans = 0;
    int x = 1;
    while (number > 0)
    {
        int y = number % 10;
        ans += x * y;
        x *= 8;
        number /= 10;
    }
    return ans;
}

int hexadecimalToDecimal()
{
    cout << "Enter a hexadecimal number\n";
    string number;
    cin >> number;

    int ans = 0;
    int x = 1;

    int s = number.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (number[i] >= '0' && number[i] <= '9')
        {
            ans += x * (number[i] - '0');
        }
        else if (number[i] >= 'A' && number[i] <= 'F')
        {
            ans += x * (number[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int decimalToBinary()
{
    cout << "Enter a decimal number\n";
    int n;
    cin >> n;

    int x = 1;
    int ans = 0;

    while (x <= n) {x *= 2;}

    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int decimalToOctal()
{
    cout << "Enter a decimal number\n";
    int n;
    cin >> n;

    int x = 1;
    int ans = 0;

    while (x <= n) {x *= 8;}

    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

string decimalToHexadecimal(){
    cout << "Enter a decimal number\n";
    int n;
    cin >> n;

    int x = 1;
    string ans = "";

    while (x <= n) {x *= 16;}

    x /= 16;

    while (x > 0)
    {
          int lastDigit = n / x;
          n -= lastDigit * x;
          x /= 16;

        if(lastDigit <= 9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + (lastDigit - 10);
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    cout << "Select an option\n";
    int option;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << binaryToDecimal();
        break;
    case 2:
        cout << octalToDecimal();
        break;
    case 3:
        cout << hexadecimalToDecimal();
        break;
    case 4:
        cout << decimalToBinary();
        break;
    case 5:
        cout << decimalToOctal();
        break;
    case 6:
        cout << decimalToHexadecimal();
        break;
    default:
        cout << "Enter a valid option" << endl;
        break;
    }

    return 0;
}