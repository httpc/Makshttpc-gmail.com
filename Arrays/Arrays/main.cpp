#include<iostream>
using namespace std;

void main()
{
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };

	//���� ��������� ������� � ����������:
	/*cout << "Input values of elements (" << SIZE << " numbers): ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}*/

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand()%100;
	}

	//����� ������� �� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������:
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}