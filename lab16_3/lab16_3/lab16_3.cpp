#include <iostream>
using namespace std;
int main(void)
{
    setlocale(0, "");
    int a[10];
    int n, i;
    cout << "N:";
    cin >> n;
    cout << "A:";
    cin>>a[0];
    cout << "B:";
    cin>>a[1];
    for (i = 2; i < n; ++i) {
        a[i] = 0;
        int i2;
        for (i2 = 0; i2 < i; ++i2) a[i] += a[i2];
    }
    for (i = 0; i < n; ++i) cout<<"Итог:"<<i<<" "<< a[i];
    return 0;
}
