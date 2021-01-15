#include <iostream>
using namespace std;
int main(void)
{
    int a[10], b[10];
    int n;

    cout << "N:";
    cin >> n;

    int i;
    for (i = 0; i < n; ++i) {
        cout<<"a["<< i + 1<<"]";
        cin >> a[i];
    }
    for (i = 0; i < n; ++i) {
        cout<<"b["<<i + 1<<"]";
        cin >> b[i];
    }

    for (i = 0; i < n; ++i) {
        a[i] += b[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];
    }
    cout << "A:";
    for (i = 0; i < n; ++i) cout<<" "<< a[i];

    cout<<"B:";
    for (i = 0; i < n; ++i) cout<<" "<< b[i];

    return 0;
}
