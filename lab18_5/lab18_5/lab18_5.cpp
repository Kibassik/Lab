#include <iostream>
using namespace std;
int main(void)
{
    float a[10];

    int n;
    cout << "N:";
    cin >> n;

    int i;
    for (i = 0; i < n; ++i) {
        cout<<"a["<<i + 1<<"]";
        cin >> a[i];
    }

    for (i = 1; i < n; ++i) {
        if (a[i - 1] > a[i]) {
            a[i - 1] = a[i] + a[i - 1];
            a[i] = a[i - 1] - a[i];
            a[i - 1]= a[i - 1] - a[i];
        }
        else break;
    }
    cout << "A:";
    for (i = 0; i < n; ++i) cout<<a[i]<<" ";

    return 0;
}
