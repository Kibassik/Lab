#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите первое число:";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;
	if (a != b) {
		if (a > b) {
			c = a + b;
			a = c - b;
			b = c - b;
		}
		else {
			c = a + b;
			b = c - a;
			a = c - a;
		}
		cout << "Новое значение:" << a << ' ' << "Новое значение:" << b << endl;
	}
	else {
		a = b = 0;
		cout << "Новое значение:" << a << ' ' << "Новое значение:" << b << endl;
	}
	int r, k, t;
	cout << "Введите первое число:";
	cin >> r;
	cout << "Введите второе число:";
	cin >> t;
	cout << "Введите третье число:";
	cin >> k;
	if (t <= k && t <= r) {
		cout << r + k<<"Сумма первого и третьего"<<endl;
	}
	else {
		if (r <= k && r <= t) {
			cout << t + k<<"Сумма второго и третьего"<<endl;
		}
		else {
			cout << t + r<<"Сумма второго и первого"<<endl;
		}
	}
	int p, o, i;
	cout << "Введите первое число:";
	cin >> i;
	cout << "Введите второе число:";
	cin >> o;
	cout << "Введите третье число:";
	cin >> p;
	if (abs(i - o) < abs(i - p)) {
		cout << "Точка:" << o << endl;
		if ((i - o) > 0)
			cout << "Расстояние:" << i - o << endl;
		else if ((i - o) < 0)
			cout << "Расстояние:" << (i - o) * -1<<endl;
	}
	else {
		cout << "Точка:" << p << endl;
		if ((o - p) > 0)
			cout << "Расстояние:" << i - p<<endl;
		else if ((i - p) < 0)
			cout << "Расстояние:" << (i - p) * -1<<endl;
	}
	int x, h;
	cout << "Введите X:";
	cin >> x;
	cout << "Введите Y:";
	cin >> h;

	if (x > 0 && h > 0) {
		cout << "Первая четверть"<<endl;
	}
	else if (x < 0 && h>0) {
		cout << "Вторая четверть"<<endl;
	}
	else if (x < 0 && h < 0) {
		cout << "Третья четверть"<<endl;
	}
	else
		cout << "Четвертая четверть"<<endl;
	int j;
	cout << "Введите число:";
	cin >> j;
	if (j == 0) {
		cout << "Нулевое" << endl;
	}
	else {
		if (j > 0)
			cout << "Положительное" << endl;
		else
			cout << "Отрицательное" << endl;

		if ((j % 2) == 0)
			cout << "Четное" << endl;
		else
			cout << "Нечетное" << endl;
	}
	int n;
	cout << "Введите число в диапозоне 1-999" << endl;
	cin >> n;
	if (n % 2 == 0);
	else cout << "не";
	cout << "четное ";
	if (n / 100 > 0 && n / 100 < 10) cout << "трехзначное "<<endl;
	else if (n / 10 > 0 && n / 10 < 10) cout << "двухзначное "<<endl;
	else if (n / 10 == 0) cout << "однозначное "<<endl;
}