#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int A,B,C;
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	cout << "C:";
	cin >> C;
    if (A > 2 && B <= 3) {
		cout << "Истинно"<<endl;
	}
	else {
		cout << "Ложь" << endl;
	}
	if (A < B && B < C) {
		cout << "Истинно"<<endl;
	}
	else {
		cout << "Ложь"<<endl;
	}
	if (A % 2 == 0 && A > 9 && A < 100) {
		cout << "Истинно"<<endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}
	if ((A / 100) > (A % 100 / 10) && (A % 100 / 10) > (A % 10) || (A / 100) < (A % 100 / 10) && (A % 100 / 10) < (A % 10)) {
		cout << "Истинно" << endl;
	}
	else {
		cout << "Ложь"<<endl;
	}
	int x1, x2, x3, x4, num;
	cout << "Введите число: ";
	cin >> num; 
	x1 = num / 1000; 
	x2 = num / 100 % 10; 
	x3 = num % 100 / 10; 
	x4 = num % 10; 
	if (x1 == x4 && x2 == x3) 
	{
		cout << "Истинно " << endl; 
	}
	else 
	{
		cout << "Ложь " << endl;
	}
	if ((A * A == B * B + C * C) || (B * B == A * A + C * C) || (C * C == A * A + B * B)) {
		cout << "Истинно"<<endl;
	}
	else {
		cout << "Ложь"<<endl;
	}
	if ((A + B) > C && (A + C) > B && (B + C) > A) {
		cout << "Истинно"<<endl;
	}
	else {
		cout << "Ложь"<<endl;
	}
}