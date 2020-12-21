#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, a1, b1,c,c1,c2,b2,a2,x,x1;
    cout << "Введите А=";
    cin >> a;
    cout << "Введите Б=";
    cin >> b;
    cout << "Введите C=";
    cin >> c;
     a1 = b;
     b1 = a;
     c1 = b;
     c2 = a;
     a2 = c;
     b2 = c;
    cout << "А в Б=" << b1 << endl;
    cout << "Б в А=" << a1 << endl;
    cout << "Пункт 2" << endl;
    cout << "А в Б=" << b1 << endl;
    cout << "Б в C=" << c1 << endl;
    cout << "С в А=" << a2 << endl;
    cout << "Пункт 3" << endl;
    cout << "А в С=" << c2 << endl;
    cout << "С в Б=" << b2 << endl;
    cout << "Б в А=" << a1 << endl; 
    cout << "Введите X=";
        cin >> x;
      long long  w = (3 * pow(x, 6) - 6 * pow(x, 2) - 7);
            cout << "y=" << w << endl;
            cout << "Введите X=";
            cin >> x1;
            long long q = (4 * pow(x1 - 3, 6) - 7 * pow(x1 - 3, 3) + 2);
            cout << "y=" << q << endl;
          long long  A;
            cout << "Введите A=";
            cin >>A;
            A = A * A;
            A = A * A;
            A = A * A;
            cout << "A^8=" << A << endl;
            int A1;
            cout << "Введите A=";
            cin >> A1;
      long long r = A1 * A1;   
      int  t = A1 * r;         
        t = r * t;         
        r = t * t;          
        r = r * t; 
   cout << "A^15=" << r << endl;
   return 0;


}

