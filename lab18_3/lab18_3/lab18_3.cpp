#include <iostream>
using namespace std;
int main(void)
{
    int a[10];

    int n;

    cout << "N:";
        cin >> n;

    int i;
    for (i = 0; i < n; ++i) {
        cout<<"a["<<i + 1<<"]";
        cin >> a[i];
    }


    int odd = 0;

    for (i = n - 1; i >= 0; --i) {
        if (a[i] % 2 != 0) {
            odd = a[i];
            break;
        }
    }

    for (; i >= 0; --i) {
        if (a[i] % 2 != 0) {
            a[i] += odd;
        }
    }

    cout << "A:";
    for (i = 0; i < n; ++i) cout<< a[i]<<" ";

    return 0;
}