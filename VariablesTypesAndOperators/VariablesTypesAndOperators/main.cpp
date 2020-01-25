#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//#define CONSTANTS
//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR	//Оператор присваивания
#define INCREMENTO_DECREMENTO

void main()
{
	setlocale(LC_ALL, "");

#ifdef CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;

	//cout << sizeof(8192) << endl;
	//cout << sizeof(3.14f) << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("Hello") << endl;

	//cout << typeid(8192ULL).name() << endl;
	//cout << typeid('+').name() << endl;  
#endif // CONSTANTS

#ifdef ARITHMETICAL_OPERATORS
	int a = 25;
	int b = 7;
	cout << (double)a / b << endl;
	//cout << b % a << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//	l-value = r-value;
	/*int a = 2;
	int b = 3;*/
	//int c = a + b * 3;
	2 + 3 + 4 + 5;

	int a, b, c;
	a = b = c = 0;

	5;
	a;
#endif ASSIGNMENT_OPERATOR

#ifdef INCREMENTO_DECREMENTO //(++/--)
	/*int n = 5;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;*/

	int i = 0;
	int j = i++;
	cout << i << endl;
	cout << j << endl;
#endif // INCREMENTO_DECREMENTO

}