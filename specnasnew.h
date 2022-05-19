#include <iostream>
#include <math.h>
using namespace std;
class CPolygon //объявление класса
{
protected:
  float x,m;
public:
  CPolygon(){}//конструктор класса
  CPolygon(float m):m(x) {}//конструктор с параметром
  virtual float Perimetr()=0;//вычисление периметра
  virtual void show() //вывод основных характеристик
  {
    cout<<"Периметр= "<<Perimetr()<<endl;
  }
  void X() //ввод стороны
  {
    int y=0;
    cout<<"Введите х= ";
    cin>>y;
    x=y;
  }
  ~CPolygon() //деструктор
  {
    cout<<"Многоугольник удален"<<endl;
  }
};

class CTriangle:public CPolygon //объявление класса
{
public:
  CTriangle():CPolygon(){}; //конструктор класса
  CTriangle(float x):CPolygon(x) {}; //конструктор с параметром
  float Perimetr() override //вывод периметра
  {
    return x*2+sqrt(pow(x,2)*2);
  }
  ~CTriangle() //деструктор
  {
    cout<<"Треугольник удален"<<endl;
  }
};

class CQuad:public CPolygon //объявление класса
{
public:
  CQuad():CPolygon(){}; //конструктор класса
  CQuad(float x):CPolygon(x) {}; //конструктор с параметром
  float Perimetr() override // вывод периметра
  {
      return x*4;
  }
  ~CQuad() //деструктор
  {cout<<"Квадрат удален"<<endl;}
};
