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
        cout<<"a[i]:"<< i + 1<<" ";
        cin >> a[i];
    }

    int i2;
    for (i = 0; i < n - 1; ++i) {
        for (i2 = i + 1; i2 < n; ++i2) {
            if (a[i] == a[i2]) {
                cout<<i + 1<<" "<< i2 + 1;
            }
        }
    }

    return 0;
}
