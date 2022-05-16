#include <iostream>
class CPolygon //объявление класса
{
protected:
  int vp[7][2];
  int d[7];
  int p=7;
public:
  CPolygon() //конструктор класса
  {
    cout<<"Введите значения вершин: "<<endl;
    for(int i=0;i<p;i++)
      for(int j=0;j<2;j++)
      {
        if(j==0)
          cout<<" x= ";
        else
          cout<<" y= ;"
        cin>>vp[i][j]
      }
    cout<<endl;
  }
  CPolygon(int m):m(x){} //конструктор с параметром
  virtual void Perimetr(int p) //вычисление периметра
  {
    int per=0;
    for(int i=0;i<(p-1);i++)
      for(int j=0;j<1;j++)
        d[i]=sqrt(pow((vp[i][j]-vp[i+1][j]),2)+pow((vp[i][j+1]-vp[i+1][j+1]),2);
    d[p]=sqrt(pow((vp[p][0]-vp[0][0]),2)+pow((vp[p][1]-vp[0][1]),2);
    for(int i=0;i<p;i++)
      per=per+d[i];
  };
  void show(p) //вывод основных характеристик
  {
    cout>>"Периметр= ";cin>>per;
    cout>>"Вершины: ">>endl;
    for(int i=0;i<p;i++)
      for(int j=0;j<2;j++)
        {
          if(j==0)
            cout>>"x= ";
          else
            cout>>"y= ";
          cin>>vp[i][j];
        }
  }
  ~CPolygon() //деструктор
  {
    cout<<"Многоугольник удален"<<endl;
  }
};

class CTriangle:public CPolygon //объявление класса
{
  int vt[3][2];
public:
  CTriangle(); //конструктор класса
  CTriangle(int t[3][2]); //конструктор с параметром
  void show(); //вывод матрицы матрицы
  ~CTriangle(); //деструктор
};

class CQuad:public CPolygon //объявление класса
{
  int vq[4][2];
public:
  CQuad(); //конструктор класса
  CQuad(int t[4][2]); //конструктор с параметром
  void show(); //вывод матрицы матрицы
  ~CQuad(); //деструктор
};
