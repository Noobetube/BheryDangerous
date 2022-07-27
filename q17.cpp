#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int vertices, in, nout, inver, outver;
	cout << "Enter the no of vertices: ";
	cin >> vertices;
	
	int matrix[vertices][vertices];
	for(int i=0; i<vertices; i++)
		for(int j=0; j<vertices; j++)
			 matrix[i][j] = 0;
	
	for(int i=0; i<vertices; i++)
	{
		cout << "Enter the no of edges incoming to vertex " << i+1 << ": ";
		cin >> in;
		for(int x=0; x<in; x++)
		{
			cout << "Enter the vertex from which incoming edge to vertex " << i+1 << " is emerging from: ";
			cin >> inver;
			matrix[i][inver -1] = -1;
		}
		
		cout << "Enter the no of edges outgoing from vertex " << i+1 << ": ";
		cin >> nout;
		for(int y=0; y<nout; y++)
		{
			cout << "Enter the vertex to which outgoing edge from vertex " << i+1 << " is ending at: ";
			cin >> outver;
			matrix[i][outver -1] = 1;
		}
	}
	
	for(int i=0; i<vertices; i++)
	{
		int in_degree=0, out_degree=0;
		for(int j=0; j<vertices; j++)
		{
			if(matrix[i][j] == 1)
				out_degree += matrix[i][j];
			
			if(matrix[i][j] == -1)
				in_degree += matrix[i][j];
		}
		
		cout << "\n\nin-degree of vertex " << i+1 << " is " << abs(in_degree)
			 << "\tOut-degree of vertex " << i+1 << " is " << out_degree;
	}
	
	return 0;
}