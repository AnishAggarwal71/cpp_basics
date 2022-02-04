#include <iostream>
using namespace std;

//Rectangle
void rectangle()
{
    cout << "Enter length and breath\n";
    int length, breath;
    cin >> length;
    cin >> breath;

    for (int i = 0; i <= length; i++)
    {
        for (int j = 0; j <= breath; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Hollow Rectangle
void hollowRectangle()
{
    cout << "Enter length and breath\n";
    int length, breath;
    cin >> length >> breath;

    for (int i = 0; i <= length; i++)
    {
        for (int j = 0; j <= breath; j++)
        {
            if (i == 0 || i == length)
            {
                cout << " * ";
            }
            else if (j == 0 || j == breath)
            {
                cout << " * ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Inverted half Triangle
void invertedHalfTriangle()
{

    int length;
    cin >> length;

    for (int i = length; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Inverted half Triangle with 180 degree rotation
void invertedHalfTriangle180()
{

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (j <= length - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Triangle
void triangle()
{

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (j <= length - i)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Floyd's Triangle
void floydTriangle()
{

    int length;
    int count = 1;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Butterfly
void butterfly()
{

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * length - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = length; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * length - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Rhombus
void rhombus()
{

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= length - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= length; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Number Pattern
void numberPattern()
{

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j < length - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Palindromic Pattern
void palindromicPattern()
{

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        int j;
        for (j = 1; j <= length - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= length; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= length + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Star Pattern
void starPattern()
{

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= length - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = length; i >= 1; i--)
    {
        for (int j = 1; j <= length - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//<--- **************************** --->

//Zig-Zac Pattern
void zigZac()
{
    int length;
    cin >> length;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

//Main

int main()
{
    int option;
    cout << "Select an option" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        rectangle();
        break;
    case 2:
        hollowRectangle();
        break;
    case 3:
        invertedHalfTriangle();
        break;
    case 4:
        invertedHalfTriangle180();
        break;
    case 5:
        triangle();
        break;
    case 6:
        floydTriangle();
        break;
    case 7:
        butterfly();
        break;
    case 8:
        rhombus();
        break;
    case 9:
        numberPattern();
        break;
    case 10:
        palindromicPattern();
        break;
    case 11:
        starPattern();
        break;
    case 12:
        zigZac();
        break;
    }

    return 0;
}