#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int N;
    cout << "N="; cin >> N;
    double* A = new double[N];
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 9 + 1;
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < N; i += 2)
        cout << A[i] << " ";
    for (int i = 0; i < N; i += 2)
        cout << A[i] << " ";
    cout << endl;
    delete[]A;
    return 0;
}