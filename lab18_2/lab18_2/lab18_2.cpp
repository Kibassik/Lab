#include <iostream>
using namespace std;
int main(void)
{
    float a[10], b[10];
    int n;
    cout << "N:";
    cin >> n;
    int k;
    for (k = 0; k < n; ++k) {
       cout<<"a["<<k + 1<<"]:";
        cin >> a[k];
    }

    int i;
    for (k = 0; k < n; ++k) {
        b[k] = 0;
        for (i = k; i < n; ++i) {
            b[k] += a[i];
        }
        b[k] /= (n - k);
    }

    cout << "B:";
    for (k = 0; k < n; ++k) cout<<k + 1<<endl<<" "<< b[k];

    return 0;
}