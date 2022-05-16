#include <iostream>
#include <math.h>
using namespace std;
class CPolygon //объявление класса
{
protected:
  int vp[7][2];
  int d[7];
  int n=7;
public:
  int per=0;
  CPolygon() //конструктор класса
  {
    for(int i=0;i<n;i++)
      for(int j=0;j<2;j++)
        vp[i][j]=3*i+2*j;
  }
  CPolygon(int n) //конструктор с параметром
  {
    for(int i=0;i<n;i++)
      for(int j=0;j<2;j++)
        vp[i][j]=3*i+2*j;
  }
  virtual void Perimetr(int n) //вычисление периметра
  {
    for(int i=0;i<(n-1);i++)
      for(int j=0;j<1;j++)
        d[i]=sqrt(pow((vp[i][j]-vp[i+1][j]),2)+pow((vp[i][j+1]-vp[i+1][j+1]),2));
    d[n]=sqrt(pow((vp[n][0]-vp[0][0]),2)+pow((vp[n][1]-vp[0][1]),2));
    for(int i=0;i<n;i++)
      per=per+d[i];
  };
  void show(int n) //вывод основных характеристик
  {
    cout<<"Периметр= "<<per<<endl;;
    cout<<"Вершины: "<<endl;
    for(int i=0;i<n;i++)
      for(int j=0;j<2;j++)
        if(j==0)
          cout<<"x= "<<vp[i][j]<<"   ";
        else
          cout<<"y= "<<vp[i][j]<<endl;
  }
  ~CPolygon() //деструктор
  {
    cout<<"Многоугольник удален"<<endl;
  }
};

class CTriangle:public CPolygon //объявление класса
{
  int vt[3][2];
  int d[3];
  int n=3;
public:
  int per;
  CTriangle():CPolygon(){}; //конструктор класса
  CTriangle(int n):CPolygon(n){}; //конструктор с параметром
  ~CTriangle() //деструктор
  {
    cout<<"Треугольник удален"<<endl;
  }
};

class CQuad:public CPolygon //объявление класса
{
  int vq[4][2];
  int d[3];
  int n=4;
public:
  int per;
  CQuad():CPolygon(){}; //конструктор класса
  CQuad(int n):CPolygon(n){}; //конструктор с параметром
  ~CQuad() //деструктор
  {
    cout<<"Квадрат удален"<<endl;
  }
};
