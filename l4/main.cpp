/* Вариант 3
 1. Ввести натуральные числа A, B и C.
    Если A больше B и B больше C, то вывести A-B-C, если B больше A и B  кратно C,
    то вывести B/С+B-A, в остальных случаях вывести A+B+C.
 2. Ввести цифру N, при помощи оператора switch вывести название цифры.
    Предусмотреть обработку ошибочного ввода N.
 3. Переменная x может принимать 2 значения: -1 и 1. Если -1,
    то вывести в консоль “Negative number”, если положительное - “Positive number”.
    Предложить вариант программы и объяснить свой выбор. */


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter natural numbers A, B and C: ";
    cin >> a >> b >> c;
    if (a>0 & b>0 & c>0) {
        if (a>b & b>c) {
            cout << (a-b-c) << endl;
        }
        else if (b>a & b%c==0) {
            cout << (b/c+b-a) << endl;
        }
        else {
            cout << (a+b+c) << endl;
        }
    }


    int N;
    cout << "Enter N (0<=N<=9): ";
    cin >> N;
    switch (N) {
        case 0: cout << "Zero" << endl; break;
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "Four" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Six" << endl; break;
        case 7: cout << "Seven" << endl; break;
        case 8: cout << "Eight" << endl; break;
        case 9: cout << "Nine" << endl; break;
        default: cout << "Err" << endl;
    }


    int x;
    cout << "Enter x = 1, -1: ";
    cin >> x;
    switch (x) {
    case 1: cout << "Positive number" << endl; break;
    case -1: cout << "Negative number" << endl; break;
    default: cout << "Err" << endl; break;
    }

    return 0;
}
