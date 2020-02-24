#include<iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
double div_(double a, double b);

void main()
{
	int a, b;
	cout << "Input 2 numbers: "; cin >> a >> b;
	int c = add(a, b);
	cout << c << endl;
	cout << sub(a, b) << endl;
	cout << mul(a, b) << endl;
	cout << div_(a, b) << endl;
}

int add(int a, int b)
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