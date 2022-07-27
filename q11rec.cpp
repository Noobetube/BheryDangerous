#include <iostream>
using namespace std;

int nPr(int n, int r)
{
    if (n == 0 || r == 0)
    {
        return 1;
    }
    else
    {
        return (n * nPr(n - 1, r - 1));
    }
}

int nCr(int n, int r)
{

    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return (nCr(n - 1, r - 1) + nCr(n - 1, r - 1));
    }
}

int main()
{

    int n, r;
    cout << "Enter value of n and r: " << endl;
    cin >> n;
    cin >> r;

    int p = nPr(n, r);
    int c = nCr(n, r);

    cout << "Permutaion using recursion: " << p << endl;
    cout << "Combinatoin using recursion: " << c << endl;

    return 0;
}