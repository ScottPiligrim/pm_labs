/* Вариант-3
1. Дана последовательность целых чисел {Aj}. Найти произведение
   чисел, лежащих на отрезке [-2,20], наименьшее из таких чисел и
   номер этого числа в последовательности.
2. Дано натуральное число N (N<10^9). Найти сумму четных цифр
   числа N.*/

#include <iostream>
using namespace std;

int main()
{
   //Задача 1
   const int N_Max=1000;
   int n;
   int prod = 1;
   int min = 1000;
   int mas[N_Max];

   cout << "enter nmbr of nmbrs ";
   cin >> n;
   cout << "enter nmbrs ";

   for (int i=0; i<n; i++)
      cin >> mas[i];

   for(int i=0; i<n; i++)
   {
      if (mas[i]>-3 || mas[i]<21)
      {
         prod*=mas[i];
         if (min>mas[i])
         {
            min=mas[i];
         }
         cout << i+1 << ". " << mas[i] << endl;
      }
   }

   cout << "min nmbr " << min << endl;
   cout << "product is " << prod << endl;

   // Задача 2
   int N;
   int Sum = 0;
   cout << "enter N (N<1 000 000 000)" << endl;
   cin >> N;
   if (N>0 && N<1000000000)
   {
      while (N>0)
      {
         int x = N%10;
         if (N%2 == 0)
         {
            Sum+=x;
         }
      N/=10;
      }
      cout << "sum of even numbers N is " << Sum << endl;
   }
   else
   {
      cout << "incorrect N :(";
   }
   return 0;
}
