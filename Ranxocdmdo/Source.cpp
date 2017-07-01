#include <iostream>

using namespace std;

template <class T>
void change(T* a, T* b);

int main()
{
	int* a = new int;
	int* b = new int;
	*a = 23;
	*b = 99;

	cout << "a: " << *a << " " << "b:" << *b << endl;

	change(a, b);

	cout << "a: " << *a << " " << "b:" << *b << endl;

	delete a;
	delete b;

	cout << endl << "----------------------" << endl << endl;


	char* x = new char;
	char* y = new char;
	*x = 'g';
	*y = 'h';

	cout << "x: " << *x << " " << "y:" << *y << endl;

	change(&x, &y);

	cout << "x: " << *x << " " << "y:" << *y << endl;

	delete x;
	delete y;

	system("pause");
}


template <class T>
void change(T* a, T* b)
{
	T hold = *b;
	*b = *a;
	*a = hold;
}