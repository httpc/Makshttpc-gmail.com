#include<iostream>
using namespace std;

void main()
{
	int n;	//������ ������
	cout << "Input size: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

//UserStep