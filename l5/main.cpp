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
   const int N_Max=10000;
   int n = 21;
   int prod = 1;
   int min = 0;
   int mas[N_Max];

   cout << "enter 21 number ";

   for(int i=0;i<n;i++)
    {
        cin >> mas[i];
        if (mas[i]<=0)
        {
            cout << "Err :(" << endl;
            return 1;
        }
    }

   for (int i=0; i<n; i++)
   {
      for (int j=-2; j<20; j++)
      {
         prod*= mas[j];
         if (mas[i]<min && min==0)
         {
            min = mas[i];
         }
      }
      cout << i+1 << ". " << mas[i] << endl;
   }

   if (min!=0)
   {
      cout << "min nmbr " << min << endl;
   }
   else
   {
      cout << "how." << endl;
   }
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
