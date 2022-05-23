#include <iostream>
#include <string>
#include "specshab.h"
using namespace std;

int main()
{
    int x,b,c,y,j;
    // cout<<"Введите размер массива "<<endl;
    // cin>>x;
    // CArray <int> R1(x); //конструктор с параметром
    CArray <char> C;
    CArray <float> F;
    CArray <int> I;
    int k=1;
    while (k!=0)
    {
      cout<<endl;
      cout<<"Что хотите сделать с массивом:"<<endl;
      cout<<"1. Заполнить переменными"<<endl;
      cout<<"2. Вывести на экран"<<endl;
      cout<<"3. Ничего, завершить программу"<<endl;
      cout<<"Ваш выбор: ";
      cin>>b;
      switch (b)
      {
        case 1:
        {
          cout<<"Какой тип переменных вы хотите ввести:"<<endl;
          cout<<"1. Char"<<endl;
          cout<<"2. Float"<<endl;
          cout<<"3. Integer"<<endl;
          cout<<"Ваш выбор: ";
          cin>>c;
          switch (c)
          {
            case 1:
            {
              C.Get();
              j=1;
              break;
            }
            case 2:
            {
              F.Get();
              j=2;
              break;
            }
            case 3:
            {
              I.Get();
              j=3;
              break;
            }
          }
        break;
        }
        case 2:
        {
          if(j==1)
            C.Show();
          if(j==2)
            F.Show();
          if(j==3)
            I.Show();
          break;
        }
        case 3:
        {
          k=0;
          break;
        }
      }
    }
    return 0;
}
