// lab_03.4.cpp
// Балинська Каріна
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою
// Варант 1

#include <iostream>

using namespace std;

int main ()
{
    double x; // вхідний аргумент
    double y; // вхідний аргумент
    double R; // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі

    if ((x * x + y * y <= R * R && y >= x && x >= 0 ) ||
        (x * x + y * y <= R * R && y <= x && x <= 0))

        cout << "yes" << endl;
    else 
        cout << "no" << endl;

    cin.get();
    cin.get();
    return 0;
}