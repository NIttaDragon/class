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
  int per;
  CPolygon(){} //конструктор класса
  CPolygon(int n) //конструктор с параметром
  {
    cout<<"Введите значения вершин: "<<endl;
    for(int i=0;i<n;i++)
      for(int j=0;j<2;j++)
      {
        if(j==0)
          cout<<" x= ";
        else
          cout<<" y= ";
        cin>>vp[i][j];
      }
    cout<<endl;
  }
  virtual void Perimetr(int n) //вычисление периметра
  {
    int per=0;
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
          cout<<"y= "<<endl;
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
  void Perimetr(int n) override
  {
    int per=0;
    for(int i=0;i<(n-1);i++)
      for(int j=0;j<1;j++)
        d[i]=sqrt(pow((vt[i][j]-vt[i+1][j]),2)+pow((vt[i][j+1]-vt[i+1][j+1]),2));
    d[n]=sqrt(pow((vt[n][0]-vt[0][0]),2)+pow((vt[n][1]-vt[0][1]),2));
    for(int i=0;i<n;i++)
      per=per+d[i];
  }
  void show(int n) //override //вывод матрицы матрицы
  {
    cout<<"Периметр= "<<per<<endl;
    cout<<"Вершины: "<<endl;
    for(int i=0;i<n;i++)
      for(int j=0;j<2;j++)
        if(j==0)
          cout<<"x= "<<vt[i][j]<<"   ";
        else
          cout<<"y= "<<vt[i][j]<<endl;
  }
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
  void Perimetr(int n) override
  {
    int per=0;
    for(int i=0;i<(n-1);i++)
      for(int j=0;j<1;j++)
        d[i]=sqrt(pow((vq[i][j]-vq[i+1][j]),2)+pow((vq[i][j+1]-vq[i+1][j+1]),2));
    d[n]=sqrt(pow((vq[n][0]-vq[0][0]),2)+pow((vq[n][1]-vq[0][1]),2));
    for(int i=0;i<n;i++)
      per=per+d[i];
  }
  void show(int n) //override //вывод матрицы матрицы
  {
    cout<<"Периметр= "<<per<<endl;
    cout<<"Вершины: "<<endl;
    for(int i=0;i<n;i++)
      for(int j=0;j<2;j++)
        if(j==0)
          cout<<"x= "<<vq[i][j]<<"   ";
        else
          cout<<"y= "<<vq[i][j]<<endl;
  }
  ~CQuad() //деструктор
  {
    cout<<"Квадрат удален"<<endl;
  }
};
