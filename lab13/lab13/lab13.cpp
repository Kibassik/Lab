#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float r, y;
    cout << "Введите стоимость 1 кг конфет:";
    cin >> r;
    cout << "Стоимость конфет" << endl;
    for (y = 0.1; y < 1.1; y += 0.1)
        cout << y << " Киллограм     = " << r * y << endl;
    int N;
    double p = 1;
    double a = 1.1;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        p *= a;
        a += 0.1;
    }
    cout << "Результат = " << p << endl;
    int t;
    cout << "N:";
    cin >> t;
    int rez = 0;
    int i;
    for (i = 1; i <= (2 * t - 1); i += 2) {
        rez += i;
        cout << "Результат:" << rez << endl;
    }
    int l, j;
    double A, b, c;
    cout << "Введитет N:";
    cin >> l;
    cout << "Введите A:";
    cin >> A;
    b = 1;
    c = 1;
    for (j = 1; j <= l; j++);
    {b *= A; c += b; }
    cout << "Результат:" << c << endl;
    float e;
    cout << "A:";
    cin >> e;
    int n;
    cout << "N:";
    cin >> n;
    float a2 = 1, x = 1;
    int z;
    for (z = 2; z <= n; ++z)
    {
        a2 *= -e;
        x += a2;
    }
    cout << "Результат:" << x;
    return 0;
}