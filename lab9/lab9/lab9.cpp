#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int q, t;
	cout << "Секунды:";
	cin >> q;
	t = q % 60;
	cout << "Количество секунд, прошедших с начала последней минуты:" << t<<endl;
	int k, r;
	cout << "K:";
	cin >> k;
	r = k % 7;
	cout << "Номер дня недели:" << r << endl;;
	int u, o, l;
	cout << "K:";
	cin >> u;
	cout << "N:";
	cin >> o;
	o = o - 2;
	l = ((u + o) % 7) + 1;
	cout << "Номер дня недели:" << l<<endl;
	int A, B, C;
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	cout << "C:";
	cin >> C;
	int p = A * B;
	int i = C * C;
	int b = p / i;
	cout << "Кол-во квадратов:" << b << endl;
	int f, g;
	cout << "Целое число:";
	cin >> f;
	g = (f / 100) + 1;
	cout << "Номер столетия:" << g << endl;
}