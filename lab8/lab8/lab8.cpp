#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int a, c;
    cout << "Кол-во байт:";
    cin >> a;
    c = a / 1024;
    cout << "Кол-во килобайт:" << c << endl;
    int d, w, e;
    cout << "A=";
    cin >> d;
    cout << "B=";
    cin >> w;
    e = d / w;
    cout << "Кол-во отрезков=" << e << endl;
    int t, y, u;
    cout << "A=";
    cin >> t;
    cout << "B=";
    cin >> y;
    u = t % y;
    cout << "Длина незанятой части отрезка=" << u << endl;
    int i, o;
    cout << "Введите двухзначное число=";
    cin >> i;
    o = i / 10 + i % 10 * 10;
    cout << "Число после перестановки=" << o << endl;
    int p, j;
    cout << "Введите трехзначное число=";
    cin >> p;
    j = (p % 100 / 10 * 100) + (p % 10) * 10 + p / 100;
    cout << "Полученное число=" << j;  
}

