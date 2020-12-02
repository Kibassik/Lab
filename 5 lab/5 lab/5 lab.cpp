#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, x2, y1,y2,w,q,z,x11,x22,y11,y22,x111,x222,y111,y222,x3,y3;	
	int A, B, C;
	cout << "Введите x1:";
	cin >> x1;
	cout << "Введите y1:";
	cin >> y1;
	cout << "Введите x1:";
	cin >> x2;
	cout << "Введите y2:";
	cin >> y2;
	int s = (x1+y1)-(x2+y2);
	if (s > 0) {
		cout << "Расстояние между двумя точками=" << s << endl;
	}
	else {
		int b = (x2 + y2) - (x1 + y1);
		cout << "Расстояние между двумя точками=" << b << endl;
	}
	cout << "Введите A:";
	cin >> A;
	cout << "Введите B:";
	cin >> B;
	cout << "Введите C:";
	cin >> C;
	int d = (A + C);
	int r = (B + C);
	int e = (d + r);
	cout << "Длина отрезка AC=" << d << endl;
	cout << "Длина отрезка BC=" << r << endl;
	cout << "Сумма длин отрезков AC и BC=" << e << endl;
	cout << "Введите A:";
	cin >> w;
	cout << "Введите B:";
	cin >> q;
	cout << "Введите C:";
	cin >> z;
	int x = (A + C);
	int f = (B + C);
	int v = (x * f);
	cout << "Длина отрезка AC=" << x << endl;
	cout << "Длина отрезка BC=" << f << endl;
	cout << "Произведение длин отрезков AC и BC=" << v << endl;
	cout << "Введите x1:";
	cin >> x11;
	cout << "Введите y1:";
	cin >> y11;
	cout << "Введите x1:";
	cin >> x22;
	cout << "Введите y2:";
	cin >> y22;
	int t = (x11 + y11) * (y22 + x22);
	int h = (x11 + y11) + (y11 + y22) + (y22 + x22) + (x11 + y22);
	cout << "Периметр прямоугльника=" << h << endl;
	cout << "Площадь прямоугольника=" << t << endl;
	cout << "Введите x1:";
	cin >> x111;
	cout << "Введите y1:";
	cin >> y111;
	cout << "Введите x1:";
	cin >> x222;
	cout << "Введите y2:";
	cin >> y222;
	cout << "Введите x3:";
	cin >> x3;
	cout << "Введите y3:";
	cin >> y3;
	int n=sqrt(pow((x222 - x111),2) + pow((y222 - y111),2));
    int u=sqrt(pow((x3 - x222),2) + pow((y3 - y222),2));
    int m=sqrt(pow((x3 - x111),2) + pow((y3 - y111),2));
	int j = (n + u + m);
	int i = (j / 2);
	int k = sqrt(i * (i - n) * (i - u) * (i - m));
	cout << "Периметр треугольника=" << j << endl;
	cout << "Площадь треугольника=" << k << endl;
	return 0;
}