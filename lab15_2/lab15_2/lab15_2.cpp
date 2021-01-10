#include <iostream>
using namespace std;
int sign(float x) {
    if (x < 0) { return -1; }    if (x == 0) { return 0; }    if (x > 0) { return 1; }
}
int main(void){
    setlocale(LC_ALL, "Russian");
    float e, r;
    cout<< "Введите А:";
 cin >> e;
 cout << "Введите B:";
 cin >> r;
 cout << "Итог:" << sign(e) + sign(r) << endl;
return 0;
}




