// лаба8задание2вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c;  //объявление переменных
	int s = 0;
	cout << "Введите a, b, c ";
	cin >> a >> b >> c;  //присваивание значений
	if ((a > b) && (b > c))  {  //проверка условий и вывод полученного значения
		s = a + b;
		cout << "s=" << s;  }
	if ((a > b) && (b < c))  {
		s = a + c;
		cout << "s=" << s;  }
	if ((a < b) && (c > a))  {
		s = c + b;
		cout << "s=" << s;  }
	else  {
		s = a + b;
		cout << "s=" << s;  }
	return 0;
}