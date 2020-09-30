
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b,d;
	float pi, l;
	pi = 3.14;
	cout << "Введите A:" ;
	cin >> a;
	cout << "Введите B:" ;
	cin >> b;
	cout << "Введите D:";
	cin >> d;
	 l = pi * d;
	int s = a * b;
	int p = 2 * (a + b);
	cout << "Площадь:" << s << endl;
	cout << "Периметр:" << p << endl;
	cout << "Периметр окружности:" << l << endl;
	int r = a * b;
	double g = (a * b) / r;
		if (g != 0) {
			float t = float(a + b) / 2;
			cout << "Среднее арифметическое:" << t << endl;
		}
		else{
			int t = (a + b) / 2;
	        cout << "Среднее арифметическое:" << t << endl;

		}
		int o = a + b;
		int h = a - b;
		int y = a * b;
		int e = (a * a) * (b * b);
		cout << "Сумма:" << o << endl;
		cout << "Разность:" << h << endl;
		cout << "Произведение :" << y << endl;
		cout << "Произведение и Частное квадратов:" << e << endl;
		int q = abs(a) +abs (b);
		int w = abs(a) -abs (b);
		int f =abs (a) *abs (b);
		int x = abs(a * a) * abs(b * b);
		cout << "Сумма модулей :" << abs(q) << endl;
		cout << "Разность модулей:" << abs(w) << endl;
		cout << "Произведение модулей :" << abs(f) << endl;
		cout << "Произведение и Частное квадратов модулей:" << abs(x) << endl;

	return 0;

}
