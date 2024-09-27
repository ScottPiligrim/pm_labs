#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Введите сторону a больше 0 и сторону b меньше 20.";
    cin >> a >> b;
    if (a>0 && b<20) {
        cout << (a+b)*2;
    } else {
        cout << "Переделывай.";
    }
    return 0;
}