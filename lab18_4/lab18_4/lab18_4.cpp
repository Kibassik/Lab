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

    int min = 0, max = 0;

    for (i = n - 1; i >= 0; --i) {
        if (a[i] > a[max]) max = i;
        if (a[i] < a[min]) min = i;
    }

    if (max < min) {
        max += min;
        min = max - min;
        max = max - min;
    }

    for (i = min + 1; i < min + (max - min); ++i) a[i] = 0;

    cout << "A:";
    for (i = 0; i < n; ++i) cout << a[i]<<" ";

    return 0;
}
