// лаба8задание3вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <math.h> 

using namespace std;

int main()
{
	setlocale(0, "");
	int x1, y1, x2, y2, x3, y3;
	float ab, ac;
	cout << "Введите x1, y1, x2, y2, x3, y3";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) + (y3 - y1));
	if (ab > ac)
	{
		cout << "точка С расположена ближе к А и находится на расстоянии " << ac;
	}
	else
	{
		cout << "точка B расположена ближе к А и находится на расстоянии " << ab;
	}
	return 0;
}
