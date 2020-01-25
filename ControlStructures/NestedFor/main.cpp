#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n = 5;
	cout << "Input size: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
		}
		cout << endl;
	}
}