#include <iostream>
using namespace std;
int main(void)
{
    setlocale(0, "");
    int a[10];
    int d, n, i, pow;

    cout << "N:";
    cin>>n;

    cout<<"A[0]:";
    cin>>a[0];

    cout<<"D: ";
    cin>>d;
    pow = 1;
    for (i = 1; i < n; ++i) {
        pow *= d;
        a[i] = a[0] * pow;
    }

    for (i = 0; i < n; ++i) cout<<"Итог:"<< i<<" "<< a[i];
    return 0;
}
