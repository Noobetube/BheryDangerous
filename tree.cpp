#include <iostream>
using namespace std;

int main()
{
    int i, m, l;

    cout << "Enter the value of m in m-array tree: " << endl;
    cin >> m;

    cout << "Enter the number of internal vertices of: " << endl;
    cin >> i;

    l = (m - 1) * i + 1;

    cout << "Number of leaves in the tree: " << l << endl;

    return 0;
}