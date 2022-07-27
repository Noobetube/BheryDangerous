#include <iostream>
using namespace std;

class sorting
{
    int n;
    int *arr;
    int c;

public:
    sorting(int size)
    {
        n = size;
        arr = new int[n];
    }
    void input();
    void display();
    void BubbleSort();
};
void sorting::input()
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void sorting::BubbleSort()
{
    int i, j;
    for (i = n; i > 1; i--)
    {
        c = 0;
        for (j = 0; j < i - 1; j++)
        {
            c++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << endl
             << "The number of comparisons is " << c << endl;
        cout << "Intermediate array ";
        display();
    }
}

void sorting::display()
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    sorting sort(size);
    cout << "Enter the elements in the array " << endl;
    sort.input();
    cout << endl
         << "The array before sorting is";
    sort.display();
    sort.BubbleSort();
    cout << endl
         << "The array after sorting is ";
    sort.display();
}