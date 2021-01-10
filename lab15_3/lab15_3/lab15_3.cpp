#include <iostream>
using namespace std;
float rings(float r1, float r2) {
    return 3.14 * (r1 * r1 - r2 * r2);
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i;
    for (i = 1; i <= 3; ++i) {
        float r1, r2;
        cout << "Введите R1:"<<endl;
        cin >> r1;
        cout << "Введите R2:" << endl;
        cin >> r2;
        cout<<"Итог:"<<rings(r1, r2);
    }
    return 0;
}