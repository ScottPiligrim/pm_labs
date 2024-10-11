// Вариант 3
// 1. Ввести натуральные числа A, B и C.
//    Если A больше B и B больше C, то вывести A-B-C, если B больше A и B  кратно C,
//    то вывести B/С+B-A, в остальных случаях вывести A+B+C.
// 2. Ввести цифру N, при помощи оператора switch вывести название цифры.
//    Предусмотреть обработку ошибочного ввода N.
// 3. Переменная x может принимать 2 значения: -1 и 1. Если -1,
//    то вывести в консоль “Negative number”, если положительное - “Positive number”.
//    Предложить вариант программы и объяснить свой выбор.


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите натуральные числа A, B и C: ";
    cin >> a >> b >> c;
    if (a>b & b>c) {
        cout << (b/c+b-a) << endl;
    }
    else {
        cout << (a+b+c) << endl;
    }


    int N;
    cout << "Введите число N (0<=N<=9): ";
    cin >> N;
    switch (N) {
        case 0: cout << "Ноль" << endl; break;
        case 1: cout << "Один" << endl; break;
        case 2: cout << "Два" << endl; break;
        case 3: cout << "Три" << endl; break;
        case 4: cout << "Четыре" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Шесть" << endl; break;
        case 7: cout << "Семь" << endl; break;
        case 8: cout << "Восемь" << endl; break;
        case 9: cout << "Девять" << endl; break;
        default: cout << "Ошибк" << endl;
    }


    int x;
    cout << "Input x = 1, -1: ";
    cin >> x;
    switch (x) {
    case 1: cout << "Positive number" << endl; break;
    case -1: cout << "Negative number" << endl; break;
    default: cout << "Err" << endl; break;
    }

    return 0;
}