#include <iostream>
#include <climits>
using namespace std;

void recordBreaker(int array[], int n)
{
    // MY Method
    int previousRecord = 0;
    int ans = 0;
    array[n+1] = 0;
    if (array[0] > array[1] || n == 1)
    {
        previousRecord = array[0];
        ans++;
        cout << "Day1 " << ans << endl;
    }
    for (int i = 1; i < n+1; i++)
    {
    
        if (array[i] > array[i + 1] && array[i] > previousRecord)
        {
            previousRecord = array[i];
            ans++;
        }
    }

    // // Apna College Method Definitions
    // //Uncomment the array initialization in main()
    // array[n] = -1;
    // if (n == 1)
    // {
    //     cout << "1" << endl;
    //     return;
    // }
    // int ans = 0;
    // int mx = -1;

    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] > mx && array[i] > array[i + 1])
    //     {
    //         ans++;
    //     }
    //     mx = max(mx, array[i]);
    // }

    cout << "No. of record breaking days " << ans << endl;
}

void longestArithmeticSubarray(int array[], int n)
{
    // My method
    int currentValue = 2;
    int ans = 2;

    for (int i = 0; i < n; i++)
    {

        int indexDifference = array[i] - array[i + 1];
        int nextIndexDifference = array[i + 1] - array[i + 2];

        if (indexDifference == nextIndexDifference)
        {
            currentValue++;
        }
        else
        {
            currentValue = 2;
        }
        ans = max(ans, currentValue);
    }

    // // Apna College Method Definitions
    // int ans = 2;
    // int d = array[1] - array[0];
    // int j = 2;
    // int curr = 2;
    // while(j<n){
    //     if(array[j] - array[j-1] == d){
    //         curr++;
    //     }
    //     else{
    //         d = array[j] - array[j-1];
    //         curr = 2;
    //     }
    //     ans = max(ans,curr);
    //     j++;
    // }

    cout << "Max value " << ans << endl;
}

void allSubarray(int array[], int n)
{
    // Sum of all the possible subarrays of an array
    // Number of subarray of an array with n elements: nC2 + n = n*(n+1)/2
    int current;

    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current += array[j];
            cout << current << endl;
        }
    }
}

void firstRepeatingElement(int a[], int n, int idx[])
{
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    int array[n];

    // For Record Breaker Apna College solution
    // int array[n+1];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    const int N = 1e6+2;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    firstRepeatingElement(array, n, idx);
    
    //allSubarray(array,n);
    //longestArithmeticSubarray(array,n);
    // recordBreaker(array, n);
    

    // return 0;
}