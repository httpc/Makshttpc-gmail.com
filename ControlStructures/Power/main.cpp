#include<iostream>
using namespace std;

//#define POWER

void main()
{
	setlocale(LC_ALL, "");

#ifdef POWER
	double a;	//��������� �������
	int n;		//���������� �������
	double N = 1;//�������

	/*unsigned int b = -3;
	cout << b << endl;
	cout << UINT_MAX << endl;*/

	cout << "������� �c������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;

	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}

	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER



}