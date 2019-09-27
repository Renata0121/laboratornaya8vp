// лаба8задание1вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;  //объявление переменных
	int max = 0;
	cout << "Введите a,b";
	cin >> a >> b;  //присваивание переменным значения
	if (a != b) { //р\проверка условия
		if (a > b) {  //нахождение максимума
			max = a; }
		else {
			max = b; }
		a = max;
		b = max; }
	else {
		a = 0;
		b = 0; }
	cout << "a=" << a << endl;  //вывод полученных значений
	cout << "b=" << b;
	return 0;
}
