#include <iostream>
using namespace std;
double celsius_to_fah(double cel)    //�����¶ȵ������¶�
{
	double fah = 32 + 1.8 * cel;
	return fah;
}
double fahrenheit_to_cels(double fah)//�����¶ȵ������¶�#pragma once
{
	double cel = (fah - 32) / 1.8;
	return cel;
}