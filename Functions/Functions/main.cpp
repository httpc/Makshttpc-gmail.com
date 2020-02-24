#include<iostream>
using namespace std;

int add(int a = 0, int b = 0, int c = 0);
int sub(int a, int b);
int mul(int a, int b);
double div_(double a, double b);
long long int factorial(int n);
double power(double a, int n);	//Прототип функции (Объявление функции - Function declaration)
void kakayato_funkcia(int, int, double = 0);

void main()
{
	int a, b;
	cout << "Input 2 numbers: "; cin >> a >> b;
	//int c = add();
	//cout << c << endl;
	cout << sub(a, b) << endl;
	cout << mul(a, b) << endl;
	cout << div_(a, b) << endl;
	//add(2, 3);
#ifdef FACTORIAL
	int n;
	cout << "Input number: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;	//Основание степени
	int n;	//Показатель степени
	cout << "Input base: "; cin >> a;
	cout << "Input exponent: "; cin >> n;
	cout << power(a, n) << endl;	//Вызов функции (Function call)  
#endif // POWER

	//main();
}

int add(int a, int b, int c)
{
	int result = a + b;
	return result;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	//mul - multiplication (умножение)
	return a * b;
}

double div_(double a, double b)
{
	return a / b;
}

long long int factorial(int n)
{
	long long int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}

double power(double a, int n)	//Реализация функции (Определение функции - Function definition)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}

//void kakayato_funkcia(int a, int b, double c)
//{
//	
//}

void kakayato_funkcia(int, int, double)
{
	
}