#include <iostream>
using namespace std;
int quarter(float x, float y) {
    if ((x > 0) && (y > 0)) { return 1; }
    if ((x < 0) && (y > 0)) { return 2; }
    if ((x < 0) && (y < 0)) { return 3; }     if ((x > 0) && (y < 0)) { return 4; }
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i;
    for (i = 1; i <= 3; ++i) {
        float x, y;
        cout<<"Введите X:";
        cin>>x;
        cout<<"Введите Y:";
        cin >> y;
        cout<<"Итог:"<<quarter(x, y);
    }
    return 0;
}
