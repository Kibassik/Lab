#include<math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    int a,e,o;
    float  t;
    int Y;
    cout << "Значение угла в градусах(0<=a<360):";
    cin >> a;
    float u =(3.14*a) / 180;
    cout << "Значение угла в радианах:" << u << endl;
    cout << "Значение угла в радианах(0<=a<2*pi):";
    float b;
    cin >> b;
    float y = (b * 180) / 3.14;
        cout << "Значение угла в градусах:" << y << endl;
        cout << "Введите вес конфет:";
            cin >> e;
            cout << "Введите цену конфет:";
                cin >> t;
                t = t / e;
                cout << "Цена 1 кг конфет:" << t << endl;
                cout << "Желаете изменить вес конфет?(1=да/2=нет)";
                cin >> Y; 
                if (Y == 1){
                    cout << "Введите вес конфет:";
                    cin >> o;
                   t = t * o;
                    cout << "Цена 1 киллограма конфет:" << t << endl;
                }    
                float V1, V2, S, T;
                cout << "Скорость первого автомобиля:";
                cin >> V1;
                cout << "Скорость второго автомобиля:";
                cin >> V2;
                cout << "Расстояние:";
                cin >> S;
                cout << "Время:";
                cin >> T;
                float K = (V2 * T) + (T * V1) + S;
                cout << "Расстояние между автомобилями:"<<K<<" "<<"Км" << endl;
                cout << "Коэффицент A:";
                int f;
                cin >> f;
                cout << "Коэффицент B:";
                int g;
                cin >> g;
                float j = -(g / f);
                cout << "Уравнение равно:" << j << endl;
                float A1, A2, B1, B2, C1, C2;
                cout << "Введите A1:";
                cin >> A1;
                cout << "Введите A2:";
                cin >> A2;
                cout << "Введите B1:";
                cin >> B1;
                cout << "Введите B2:";
                cin >> B2;
                cout << "Введите C1:";
                cin >> C1;
                cout << "Введите C2:";
                cin >> C2;
                float m = (A2 * B1) - (A1 * B2);
                float x = (C1 * B2) - (C2 * B1) / m;
                float y1 = (A1 * C2) - (A2 * C1) / m;
                cout << "X=" << x << endl;
                cout << "Y=" << y1 << endl;

                
                            
}


