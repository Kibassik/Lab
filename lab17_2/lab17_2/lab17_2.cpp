#include <iostream>
using namespace std;
int main(void)
{
    int a[10];
    int n;

    cout << "N:" << endl;
    cin >> n;

    int i;
    for (i = 0; i < n; ++i) {
        cout<<("a[] :", i + 1)<<" ";
        cin>>a[i];
    }

    int r = a[1] - a[0];
    for (i = 1; i < n; ++i) {
        if (r != a[i] - a[i - 1]) {
            r = 0;
        }
    }

    cout << r << endl;
    return 0;
}