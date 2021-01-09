#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите A:";
    cin >> a;
    cout << "Введите B:";
    cin >> b;
    int i, i2;
    for (i = a; i <= b; ++i) {
        for (i2 = 1; i2 <= i; ++i2)
            cout << i << " ";
    }
    cout << endl;
    int r, e;
    cout << "Введите A:";
    cin >> r;
    cout << "ВВедите B:";
    cin >> e;
    int temp = r;
    while (temp >= 0) {
        temp -= e;
    }
    cout <<"Длина незанятой части А:"<< temp + e<<endl;
    int N;
    int K = 0;
    int S = 0;
    cout << "Введите целое число N (>1): ";
    cin >> N;
    while (S <= N) {
        ++K;
        S += K;
    }
    cout << "Наименьшее:" << K << endl;
    float p;
    cout << "Введите %:";
    cin >> p;
    int k = 1;
    float s = 1000;
    while (s <= 1100) { 
        ++k;
        s += s * p / 100;
    }
    cout << "Вклад превысил через:" << k << endl << "Размер вклада:" << s;
    int j, v;
    cout << endl;
    cout << "Введите A:";
    cin >> j;
    cout << "Введите B:";
    cin >> v;
    while ((j != 0) & (v != 0)) {
        if (j > v) j = j % v;
        else j = v % j;
    }
    cout <<"Общий делитель:"<< a + b;
    int n, F1, F2, O,c;
    cout << endl;
    cout << "Введите N:";
    cin >> n;
    F1 = 1;
    F2 = 1;
    O = 2;
    while (n > F2) {
        c = F2;
        F2 = F1 + F2;
        F1 = c;
        O++;
    }
    cout << "Порядковый номер фибоначи:" << n;
}