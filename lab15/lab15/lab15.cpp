#include <iostream>
using namespace std;
void poweraA3(float a, float* b)
{
    *b = a * a * a;
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i;
    for (i = 1; i <= 5; ++i) {
        float a;
        cout << "Введите А:";
        cin >> a;
        float b;
        poweraA3(a, &b);
        cout << "Итог:" << b << endl;
    }
    return 0;
}

