#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
void fib(int n, int a = 0, int b = 1);

void main()
{
	setlocale(LC_ALL, "");
	/*cout << "Hello world!";
	int floor;
	cout << "На каком этаже вы находитесь: "; cin >> floor;
	elevator(floor);
	cout << factorial(5) << endl;*/
	int n;
	cout << "Введите общее количество чисел Фибоначчи: "; cin >> n;
	fib(n);
}
void elevator(int floor)
{
	cout << "you are on the " << floor << " floor;\n";
	if (floor == 0)return;
	elevator(floor - 1);
	cout << "you are on the " << floor << " floor;\n";
}
int factorial(int n)
{
	if (n < 0)return 0;
	if (n == 0)return 1;
	else return factorial(n - 1) * n;
}
double power(double a, int n)
{
	if (n == 0)	return 1;
	if (n < 0)
	{
		return  1 / a * power(a, n + 1);
	}
	else
	{
		return power(a, n - 1) * a;
	}
}
void fib(int n, int a, int b)
{
	if (0==n) return ;
	cout << a << ' ';
	fib(n - 1, b, a + b);
}
