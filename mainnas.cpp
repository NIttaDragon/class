#include <iostream>
#include "specnasnew.h"
using namespace std;

int main()
{
  CPolygon *pa; //общий указатель на классы
  CTriangle T1(5); //конструктор с параметром
  CQuad Q1(5); //конструктор с параметром
  int k,l,b;
  k=1;
  while (k!=0)
  {
    cout<<endl;
    cout<<"Что хотите сделать с объектами:"<<endl;
    cout<<"1. Вывести состояние Четырёхугольника"<<endl;
    cout<<"2. Вывести состояние Треугольника"<<endl;
    cout<<"3. Ничего, завершить программу"<<endl;
    cout<<"Ваш выбор: ";
    cin>>b;
    switch (b)
    {
      case 1:
      {
        pa=&Q1;
        pa->X();
        pa->show();
        l=1;
        break;
      }
      case 2:
      {
        pa=&T1;
        pa->X();
        pa->show();
        l=0;
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
