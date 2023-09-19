#include <iostream>
#include "deffinitions.h"


using namespace std;

void choice();

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Вариант 1\n\n";

	//method_1();
	//method_2();
	//method_3();
	//method_4();
	//method_5();
	//method_6();
	method_7();
	method_8();
}


void choice()
{
	char num = '0';
	switch ( num )
	{
	case '1':
		method_1();
	case '2':
		method_2();
	case '3':
		method_3();
	case '4':
		method_4();
	case '5':
		method_5();
	case '6':
		method_6();
	case '7':
		method_7();
	case '8':
		method_8();
	default:
		break;
	}
}