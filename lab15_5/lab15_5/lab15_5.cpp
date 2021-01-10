#include <iostream>
using namespace std;
float fact2(int n) {
    int temp = 1;
    for (; n > 0; n -= 2) 
        temp *= n;
        return temp;
    
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i, n;
    for (i = 1; i <= 5; ++i) {
        cout<<"Введите N:";
        cin>>n;
        cout<<"Итог:"<<fact2(n);
    }
    return 0;
}