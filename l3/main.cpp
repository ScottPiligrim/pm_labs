// Вариант 3
// Вывести значение i-го бита числа x (0<x<10^9).

#include <iostream>
using namespace std;

int main()
{
    int x, i;
    cout << "Ввести x (0<x<10^9) и i (0<=i<=31): ";
    cin >> x >> i;
    if (x<=0 || x>=1000000000) {
        cout << "Ошибк." << endl;
    }
    else if (i<0 || i>31) {
        cout << "Ошибк." << endl;
    }
    else {
        cout << ((x >> i) & 1) << endl;
    }
    return 0;
}
