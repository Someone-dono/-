include<iostream> 
#include <conio.h>
#include "QuadEquation.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	int key_pressed = 0;

	do
	{
		cout << "Введите a " << endl;
		cin >> a;
		cout << "Введите b " << endl;
		cin >> b;
		cout << "Введите c " << endl;
		cin >> c;

		system("cls");

		QuadEquation First_obj(a, b, c);
		First_obj.print();

		cout << endl;
		cout << "Нажмите для продолжения" << endl;
		key_pressed = _getch();
		system("cls");

	} while (key_pressed != 27);
	
	return 0;
}
