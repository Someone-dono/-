#include "QuadEquation.h"
#include<math.h> 
#include<iostream>
using namespace std;

QuadEquation::QuadEquation() {}

QuadEquation::QuadEquation(float A, float B, float C)
{
	Des = -1;
	_sqrt = 0;
	_sqrt1 = 0;
	_sqrt2 = 0;
	a = A;
	b = B;
	c = C;
	GetSqrt();
};

void QuadEquation::GetSqrt()
{
	float D;

	if (!a) 
	{
		if (!b)
		{
			if (!c)
			{
				cout <<"Корней нет" << endl;
			}
			else
			{
				cout << "Корней нет" << endl;
			}
		}
		else {
			_sqrt = -c / b;
			 }
	}
	else {
		D = (b*b) - 4 * a*c;
		Des = D;

		if (D > 0)
		{
			_sqrt1 = (-b + sqrt(D)) / (2 * a);
			_sqrt2 = (-b - sqrt(D)) / (2 * a);
		}
		else if (D == 0) 
		{
			_sqrt = -b / (2 * a);
		}
		else
		{
			cout << "Корней нет" << endl;
		}
	}
};

void QuadEquation::print()
{	

	if (Des > 0)
	{
		cout << "X1 = " << _sqrt1 << endl;
		cout << "X2 = " << _sqrt2 << endl;
	}
	else if (Des == 0)
		cout << "Один корень X = " << _sqrt << endl;
	
};
==============================================
QuadEquation.h:
#pragma once
class QuadEquation
{
private:
		
	float a, b, c, _sqrt1, _sqrt2, _sqrt, Des;
	void GetSqrt();

public:

	QuadEquation();
	QuadEquation(float A, float B, float C);
	void print();	
};
