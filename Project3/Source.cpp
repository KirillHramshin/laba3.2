#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите целое четырехзначное число: ";
	int a;
	cin >> a;
	int b1 = a / 1000;
	int b2 = (a / 100) % 10;
	int b3 = (a / 10) % 10;
	int b4 = a % 10;
	int k = 0;
	
		if (b1 % 2 == 0)
		{
			k++;

		}
		if (b2 % 2 == 0)
		{
			k++;
		}
		if (b3 % 2 == 0)
		{
			k++;
		}
		if (b4 % 2 == 0)

		{
			k++;

		}
	
	cout << "Количество четных цифр = " << k;
	
}