#include <stdio.h>
#include <iostream>

using namespace std;

void Swap(int &first, int &second)
{
	int temp = first;
	first = second;
	second = temp;
}

int main()
{
	// POINTER STUFF
	cout << "Pointer stuffs: " << endl << endl;
	int var = 10;
	int *ptr = &var;
	cout << "Working with pointers: " << endl;
	cout << "Value of ptr = " << *ptr << endl;
	cout << "Address of ptr = " << ptr << endl;

	*ptr = 20;
	cout << "Changed *ptr = 20." << endl;
	cout << "Value of ptr = " << *ptr << endl;
	cout << "Address of ptr = " << ptr << endl;
	cout << endl;

	cout << "Working with pointer and arrays:" << endl;
	int arr[3] = { 10, 20, 30 };
	int *arrptr = arr;
	cout << "*arrptr = arr" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << *arrptr << endl;
		arrptr++;
	}
	cin.ignore();
	cout << endl << endl << endl;


	// REFERENCE STUFF
	cout << "Reference stuffs: " << endl << endl;
	int a = 10;
	cout << "a created. a = 10. a = " << a << endl;
	int &ref = a;
	cout << "&ref created. &ref = a. ref = " << ref << endl;
	ref = 20;
	cout << "ref = 20." << endl;
	cout << "ref = " << ref << ", a = " << a << endl;
	a = 30;
	cout << "a = 30." << endl;
	cout << "ref = " << ref << ", a = " << a << endl << endl;

	cout << "Swap method:" << endl;
	int x = 1;
	int y = 2;
	cout << "x and y created. x = " << x << ", y = " << y << endl;
	cout << "Calling swap method..." << endl;
	Swap(x, y);
	cout << "After swap, x = " << x << ", y = " << y << endl;
	cin.ignore();
}