#include <iostream>
using namespace std;

bool Euler(int degree[10], int ver)
{
	int flag;
	int count = 0;
	for (int k = 0; k < ver; k++)
	{
		if (degree[k] % 2 != 0)
		{
			return false;
			break;
		}
		for (int k = 0; k < ver; k++)
		{
			if (degree[k] % 2 != 0)
				count++;
		}
		if (count == 2)
			cout << endl<< endl << "The given graph is an Euler Path ";
	}
	return true;
}
int main()
{
	int arr[10][10];
	int vertices;
	int edges;
	int sum;
	int deg[10];
	bool p = true;
	cout << endl
		 << "Enter vertices ";
	cin >> vertices;
	cout << endl
		 << "Enter edges ";
	cin >> edges;
	cout << endl
		 << "Enter 1 or 0: ";
	for (int i = 0; i < vertices; i++)
	{
		for (int j = 0; j < vertices; j++)
			cin >> arr[i][j];
	}
	cout << endl
		 << "The adjacenecy matrix for the graph is " << endl
		 << endl;
	for (int i = 0; i < vertices; i++)
	{
		for (int j = 0; j < vertices; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < vertices; i++)
	{
		sum = 0;
		for (int j = 0; j < vertices; j++)
			sum += arr[i][j];
		deg[i] = sum;
	}
	for (int k = 0; k < vertices; k++)
	{
		cout << endl
			 << "The degree of vertex " << k + 1 << " is: ";
		cout << deg[k];
	}
	p = Euler(deg, vertices);
	if (!p)
		cout << endl
			 << endl
			 << "The given graph is not an Euler circuit " << endl;
	else if (p)
		cout << endl
			 << endl
			 << "The given graph is an Euler grpah as well as an Euler circuit " << endl;
	return 0;
}