#include<iostream>

using namespace std;

int main()
{
	int vertices, c=0, a, p;
	cout << "Enter the no of vertices: ";
	cin >> vertices;
	int matrix[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			 matrix[i][j] = 0;
	
	for(int i=0; i<n; i++)
	{
		cout << "Enter the vertex adjacent to " << i+1 << ": ";
		cin >> vertices;
		
		for(int j=0; j<x; j++)
		{
			cout << "Enter the vertex adjacent to vertex " << i+1 << ": ";
			cin >> p;
			
			for(int a=0; a<vertices; a++)
				if(a+1 == p)
				{
					matrix[i][a] = 1;
					break;
				}
		}
	}
	
	cout << "Adjaceny Matrix: ";
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=0; j<n; j++)
		{
			cout << matrix[i][j] << " ";
			if(matrix[i][i] == 0)
				sum += matrix[i][j];
		}
		cout << endl;
		if(sum == (n-1))
			c++;
	}
	
	if(c == n)
		cout << "Graph is Complete";
	
	else
		cout << "Graph is not complete";
	
	return 0;
}