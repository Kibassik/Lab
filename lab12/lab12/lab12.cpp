#include <iostream>
# include <windows.h>
# include <cmath>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "Введите число от 1-31:";
	cin >> a;
	cout << "Введите число от 1-12:";
	cin >> b;
	switch (a) {
	case 1:
		cout << "Первое";
		break;
	case 2:
		cout << "Второе";
		break;
	case 3:
		cout << "Третье";
		break;
	case 4:
		cout << "Четвертое";
		break;
	case 5:
		cout << "Пятое";
		break;
	case 6:
		cout << "Шестое";
		break;
	case 7:
		cout << "Седьмое";
		break;
	case 8:
		cout << "Восьмое";
		break;
	case 9:
		cout << "Девятое";
		break;
	case 10:
		cout << "Десятое";
		break;
	case 11:
		cout << "Одинадцатое";
		break;
	case 12:
		cout << "Двенадцатое";
		break;
	case 13:
		cout << "Тринадцатое";
		break;
	case 14:
		cout << "Четырнадцатое";
		break;
	case 15:
		cout << "Пятьнадцатое";
		break;
	case 16:
		cout << "Шестнадцатое";
		break;
	case 17:
		cout << "Восемьнадцатое";
		break;
	case 18:
		cout << "Восемьнадцатое";
		break;
	case 19:
		cout << "Девятнадцатое";
		break;
	case 20:
		cout << "Двадцатое";
		break;
	case 21:
		cout << "Двадцать первое";
		break;
	case 22:
		cout << "Двадцать второе";
		break;
	case 23:
		cout << "Двадцать третье";
		break;
	case 24:
		cout << "Двадцать четвертое";
		break;
	case 25:
		cout << "Двадцать пятое";
		break;
	case 26:
		cout << "Двадцать шестое";
		break;
	case 27:
		cout << "Двадцать седьмое";
		break;
	case 28:
		cout << "Двадцать восьмое";
		break;
	case 29:
		cout << "Двадцать девятое";
		break;
	case 30:
		cout << "Тридцатое";
		break;
	case 31:
		cout << "Тридцать первое";
		break;
	}
	switch (b) {
	case 1:
		cout <<" "<< "Января";
		break;
	case 2:
		cout <<" "<< "Февраля";
		break;
	case 3:
		cout <<" "<< "Марта";
		break;
	case 4:
		cout <<" "<< "Апреля";
		break;
	case 5:
		cout <<" "<< "Мая";
		break;
	case 6:
		cout <<" "<< "Июня";
		break;
	case 7:
		cout <<" "<< "Июля";
		break;
	case 8:
		cout <<" "<< "Августа";
		break;
	case 9:
		cout <<" "<< "Сентября";
		break;
	case 10:
		cout <<" "<< "Октября";
		break;
	case 11:
		cout <<" "<< "Ноября";
		break;
	case 12:
		cout <<" "<< "Декабря";
		break;
	}
	cout << endl;
	int n;
	char c;
	cout << "Направление:";
	cin >> c;
	cout << "Операции:";
	cin >> n;
	switch (c) {
	case 'С':
		switch (n) {
		case 1:
			c = 'З';
			break;
		case 0:
			c = 'С';
			break;
		case -1:
			c = 'В';
			break;
		}
		break;
	case 'В':
		switch (n) {
		case 1:
			c = 'С';
			break;
		case 0:
			c = 'В';
			break;
		case -1:
			c = 'Ю';
			break;
		}
	case 'Ю':
		switch (n) {
		case 1:
			c = 'В';
			break;
		case 0:
			c = 'Ю';
			break;
		case -1:
			c = 'З';
			break;
		}
		break;
	case 'З':
		switch (n) {
		case 1:
			c = 'Ю';
			break;
		case 0:
			c = 'З';
			break;
		case -1:
			c = 'С';
			break;
		}
	}
	cout << c<<endl;
	int u;
	cout << "Введите число от 1-40:";
	cin >> u;
	switch (u)
	{
	case 10:cout << "Десять учебных заданий"; break;
	case 11:cout << "одиннадцать учебных заданий"; break;
	case 12:cout << "двенадцать учебных заданий"; break;
	case 13:cout << "тринадцать учебных заданий"; break;
	case 14:cout << "четырнадцать учебных заданий"; break;
	case 15:cout << "пятнадцать учебных заданий"; break;
	case 16:cout << "шестнадцать учебных заданий"; break;
	case 17:cout << "семнадцать учебных заданий"; break;
	case 18:cout << "восемнадцать учебных заданий"; break;
	case 19:cout << "девятнадцать учебных заданий"; break;
	default:
		switch (u / 10)
		{
		case 2:cout << "Двадцать"; break;
		case 3:cout << "Тридцать"; break;
		case 4:cout << "Сорок"; break;
		}
		switch (u % 10)
		{
		case 1:cout << " одно учебное задание"; break;
		case 2:cout << " два учебных задания"; break;
		case 3:cout << " три учебных задания"; break;
		case 4:cout << " четыре учебных задания"; break;
		case 5:cout << " пять учебных заданий"; break;
		case 6:cout << " шесть учебных заданий"; break;
		case 7:cout << " семь учебных заданий"; break;
		case 8:cout << " восемь учебных заданий"; break;
		case 9:cout << " девять учебных заданий"; break;
		case 0:cout << " учебных заданий"; break;

		}
	}
	cout << endl;
	int v;
	cout << "Введите число от 1-999:";
	cin >> v;
	switch (v / 100)
	{
	case 1:cout << "сто"; break;
	case 2:cout << "двести"; break;
	case 3:cout << "триста"; break;
	case 4:cout << "четыреста"; break;
	case 5:cout << "пятьсот"; break;
	case 6:cout << "шестьсот"; break;
	case 7:cout << "семьсот"; break;
	case 8:cout << "восемьсот"; break;
	case 9:cout << "девятьсот"; break;
	}
	switch (v / 10 % 10)
	{
	case 10:cout << " десять"; break;
	case 2:cout << " двадцать"; break;
	case 3:cout << " тридцать"; break;
	case 4:cout << " сорок"; break;
	case 5:cout << " пятьдесят"; break;
	case 6:cout << " шестьдесят"; break;
	case 7:cout << " семьдесят"; break;
	case 8:cout << " восемьдесят"; break;
	case 9:cout << " девяносто"; break;
	}
	switch (v % 100)
	{
	case 11:cout << " одиннадцать"; break;
	case 12:cout << " двенадцать "; break;
	case 13:cout << " тринадцать"; break;
	case 14:cout << " четырнадцать"; break;
	case 15:cout << " пятнадцать "; break;
	case 16:cout << " шестнадцать "; break;
	case 17:cout << " семнадцать"; break;
	case 18:cout << " восемнадцать"; break;
	case 19:cout << " девятнадцать"; break;
	default:
		switch (v % 10)
		{
		case 1:cout << " один "; break;
		case 2:cout << " два "; break;
		case 3:cout << " три "; break;
		case 4:cout << " четыре "; break;
		case 5:cout << " пять "; break;
		case 6:cout << " шесть "; break;
		case 7:cout << " семь "; break;
		case 8:cout << " восемь "; break;
		case 9:cout << " девять "; break;

		}
	}
	cout << endl;
	int q;
	cout << "Введите год:";
	cin >> q;
	switch ((q) % 10) {
	case 0:
	case 1:
		cout << "бел";
		break;
	case 2:
	case 3:
		cout << "черн";
		break;
	case 4:
	case 5:
		cout << "зелён";
		break;
	case 6:
	case 7:
		cout << "красн";
		break;
	case 8:
	case 9:
		cout << "жёлт";
		break;
	}

	switch ((q + 1) % 5) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
	case 10:
	case 11:
		cout << "ой ";
		break;
	case 6:
	case 7:
	case 8:
		cout << "ого ";
		break;
	}

	switch ((q + 8) % 12) {
	case 0:
		cout << "крысы";
		break;
	case 1:
		cout << "коровы";
		break;
	case 2:
		cout << "тигра";
		break;
	case 3:
		cout << "зайца";
		break;
	case 4:
		cout << "дракона";
		break;
	case 5:
		cout << "змеи";
		break;
	case 6:
		cout << "лошади";
		break;
	case 7:
		cout << "овцы";
		break;
	case 8:
		cout << "обезьяны";
		break;
	case 9:
		cout << "курицы";
		break;
	case 10:
		cout << "собаки";
		break;
	case 11:
		cout << "свиньи";
		break;
	}
	return 0;
}


