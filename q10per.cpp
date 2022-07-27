#include <iostream>
using namespace std;

void permutation1(int *arr, int n, int f, int l)
{

    if (f == l)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
    for (int i = f; i <= l; i++)
    {
        swap(arr[f], arr[i]);
        permutation1(arr, n, f + 1, l);
        swap(arr[f], arr[i]);
        cout << endl;
    }
}

void permutation2(int *arr, int *B, int f, int n)
{

    if (f == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << B[i];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            B[f] = arr[i];
            permutation2(arr, B, f + 1, n);
            cout << "\n";
        }
    }
}

int main()
{

    int n;
    int ch;
    int *arr = new int[n];
    int *B = new int[n];

    cout << "Enter element in array: " << endl;
    cin >> n;

    cout << "Enter element of array:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        permutation1(arr, n, 0, n - 1);
    }
    case 2:
    {
        permutation2(arr, B, 0, n);
    }
    }
    return 0;
}