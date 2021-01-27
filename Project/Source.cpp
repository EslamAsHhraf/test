
#include <iostream>
#include<cstdlib>
#include<ctime>
#include <algorithm>
#include <chrono>
# include<cmath>
#include <cstdio> 
# include<string>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Complex
{
	int R, I;
public:
	Complex(int a, int b)
	{
		R = a; I = b;
	}
	Complex operator <=(int d)
	{
		R = I; I = d;
		return *this;
	}
	int operator <=(Complex c)
	{
		if (R <= c.R && I <= c.I) return 2;
		else if (R > c.R && I > c.I) return 0;
		else return -2;
	}
};


int main()
{
	Complex A(10, 20), B(30, 40);
	Complex C(100, 200);
	int X;
	X = A <= B <= 10;
	cout << "X=" << X << endl;
	X = A <= (B <= 10);
	cout << "X=" << X << endl;
	X = A <= 15 <= B;
	cout << "X=" << X << endl;
	//X = A<=(15<=B); //Line1
	A = B = C; //Line2
	
}