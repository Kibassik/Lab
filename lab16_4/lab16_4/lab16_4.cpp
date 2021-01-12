#include <iostream>
using namespace std;
int main(void)
{
    int a[10];
    int n, i;

    cout << "N:";
    cin >> n;
    for (i = 0; i < n; ++i) {
        cout<<"a[i]:"<<i + 1<<endl;
        cin >> a[i];
    }
    for (i = 0; i < n / 2 + 1; i += 2) {
        cout << a[i];
        if (i < n / 2) cout<< a[i + 1];             if (n - i - 1 > n / 2) cout<<a[n - i - 1];
        if (n - i - 2 > n / 2) cout<<a[n - i - 2];
    }
    return 0;
}