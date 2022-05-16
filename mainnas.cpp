#include <iostream>
#include "specnasnew.h"
// #include "reanas.cpp"
// #include "reanas1.cpp"
// #include "reanas2.cpp"
using namespace std;

int main()
{
  CPolygon P; //объявление объекта класса
  CPolygon *P2=new CPolygon; //массив указателей
  CPolygon T; //объявление объекта класса
  CPolygon *T2=new CPolygon; //массив указателей
  CPolygon Q; //объявление объекта класса
  CPolygon *Q2=new CPolygon; //массив указателей
  int c,k,b,x,y,z,n;
  // M2->NachMatr();
  // M2->show();
  cout<<"Для Многоугольника (семиугольника)"<<endl;
  n=7;
  CPolygon P1(n);
  P2->Perimetr(n);
  cout<<"Для Треугольника"<<endl;
  n=3;
  CTriangle T1(n);
  T2->Perimetr(n);
  cout<<"Для Четырёхугольника"<<endl;
  n=4;
  CQuad Q1(n);
  Q2->Perimetr(n);
  k=1;
  while (k!=0)
  {
    cout<<endl;
    cout<<"Что хотите сделать с объектами:"<<endl;
    //cout<<"0. Заполнить значения вершин объектов"<<endl;
    cout<<"1. Вывести состояние Треугольника"<<endl;
    cout<<"2. Вывести состояние Квадрата"<<endl;
    cout<<"3. Вызовов виртуальной функции для Тругольника или Кавдрата"<<endl;
    cout<<"4. Изменение значения указателя"<<endl;
    cout<<"5. Ничего, завершить программу"<<endl;
    cout<<"Ваш выбор: ";
    cin>>b;
    cout<<endl;
    switch (b)
    {
      // case 0:
      // {
      //   cout<<"Для Многоугольника (семиугольника)"<<endl;
      //   n=7;
      //   CPolygon P1(n);
      //   P2->Perimetr(n);
      //   cout<<"Для Треугольника"<<endl;
      //   n=3;
      //   CTriangle T1(n);
      //   T2->Perimetr(n);
      //   cout<<"Для Четырёхугольника"<<endl;
      //   n=4;
      //   CQuad Q1(n);
      //   Q2->Perimetr(n);
      //   break;
      // }
      case 1:
      {
        n=3;
        T2->show(n);
        break;
      }
      case 2:
      {
        n=4;
        Q2->show(n);
        break;
      }
      case 3:
      {
        cout<<"Функция временно недоступна"<<endl;
        break;
      }
      case 4:
      {
        cout<<"Функция временно недоступна"<<endl;
        break;
      }
      case 5:
      {
        k=0;
        break;
      }
    }
  }
  return 0;
}
