#include <iostream>
using namespace std;
int main(void)
{
    int a[10];
    int n;
    cout<<("N: ");
    cin >> n;
    int i;
    for (i = 0; i < n; ++i) {
        cout<<"a[i] :"<< i + 1<<" ";
        cin >> a[i];
    }
    int min = a[1];
    for (i = 1; i < n; i += 2) {
        if (a[i] < min) min = a[i];
    }
    cout << min;
    return 0;
}