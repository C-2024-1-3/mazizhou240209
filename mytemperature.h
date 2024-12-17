#include <iostream>
using namespace std;
double celsius_to_fah(double cel)    //摄氏温度到华氏温度
{
	double fah = 32 + 1.8 * cel;
	return fah;
}
double fahrenheit_to_cels(double fah)//华氏温度到摄氏温度#pragma once
{
	double cel = (fah - 32) / 1.8;
	return cel;
}