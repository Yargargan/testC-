// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


int main(void) 
{
	int i, j, n, z, m;
	
	z = 0;
	cout << "enter m: "; //scanf("%d %d", &m, &n);
	cin >> m;
	cout << "enter n: ";
	cin >> n;
	float **arr = new float*[m];

	for ( i = 0; i < m; i++ ) 
		arr[i] = new float[n];
	
	cout << "Enter matrix: \n";
	for ( i = 0; i < m; i++ )
		for ( j = 0; j < n; j++ )
			cin >> arr[i][j];
	
	cout << "The matrix: \n";
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ )
			cout << setw(4) <<  arr[i][j] << "   ";
		cout << endl;
	}

	
	for ( i = 0; i < m; i++ )
	{
		z = 0;
		for ( j = 0; j < n; j++ )
		{
			if ( arr[i][j] >= 0 )
				z++;
		}
		if ( z == n )
			cout << "row: " << (i + 1) << "\n";
		
	};

	system("PAUSE");
	return 0;
}
