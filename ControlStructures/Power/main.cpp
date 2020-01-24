#include<iostream>
using namespace std;

//#define POWER

void main()
{
	setlocale(LC_ALL, "");

#ifdef POWER
	double a;	//Основание степени
	int n;		//Показатель степени
	double N = 1;//Степень

	/*unsigned int b = -3;
	cout << b << endl;
	cout << UINT_MAX << endl;*/

	cout << "Введите оcнование степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;

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