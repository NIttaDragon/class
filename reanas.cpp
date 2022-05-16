#include <iostream>
#include <math.h>
// #include "specnas.h"
using namespace std;
int i,j;
float v1,v2,v3,v4,v5,v6,v7,per;
  CPolygon::CPolygon() //конструктор
  {
    for(i=0;i<7;i++)
      for(j=0;i<2;j++)
        versh[i][j]=0;
  }
  CPolygon::CPolygon(int t[7][2]) //конструктор с параметром
  {
    for(i=0;i<7;i++)
      for(j=0;i<2;j++)
        versh[i][j]=t[i][j];
  }
  void CPolygon::show() //вывод на экран
  {
    for(i=0;i<7;i++)
    {
      cout<<"вершина"<<i<<"   ";
      for(j=0;i<2;j++)
        if(j==0)
          cout<<"x= "<<versh[i][j]<<"   ";
        else
          cout<<"y="<<versh[i][j]<<endl;
    }
    cout<<"Периметр= "<<per<<endl;
  };
  float CPolygon::Perimetr() //нахождение периметра
  {
    v1=sqrt(pow((versh[0][0]+versh[1][0]),2)+pow((versh[0][1]-versh[1][1]),2);
    v2=sqrt(pow((versh[1][0]+versh[2][0]),2)+pow((versh[1][1]-versh[2][1]),2);
    v3=sqrt(pow((versh[2][0]+versh[3][0]),2)+pow((versh[2][1]-versh[3][1]),2);
    v4=sqrt(pow((versh[3][0]+versh[4][0]),2)+pow((versh[3][1]-versh[4][1]),2);
    v5=sqrt(pow((versh[4][0]+versh[5][0]),2)+pow((versh[4][1]-versh[5][1]),2);
    v6=sqrt(pow((versh[5][0]+versh[6][0]),2)+pow((versh[5][1]-versh[6][1]),2);
    v7=sqrt(pow((versh[6][0]+versh[0][0]),2)+pow((versh[6][1]-versh[0][1]),2);
    per=v1+v2+v3+v4+v5+v6+v7;
  };
  CPolygon::~CPolygon() //деструктор
  {
    cout<<"Многоугольник удален"<<endl;
  }
