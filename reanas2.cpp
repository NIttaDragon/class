#include <iostream>
#include <math.h>
#include "specnas.h"
using namespace std;
int i,j;
float v1,v2,v3,v4,per;
  CQuad::CQuad() //конструктор
  {
    for(i=0;i<4;i++)
      for(j=0;j<2;j++)
        versh[i][j]=0;
  }
  CQuad::CQuad(int t[4][2]) //конструктор с параметром
  {
    for (i=0;i<4;i++)
      for (j=0;j<2;j++)
        versh[i][j]=t[i][j];
  }
  void CQuad::show() //вывод на экран матрицы
  {
    for (i=0;i<4;i++)
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
    v4=sqrt(pow((versh[3][0]+versh[0][0]),2)+pow((versh[3][1]-versh[0][1]),2);
    per=v1+v2+v3+v4;
  };
  CQuad::~CQuad() //деструктор
  {
    cout<<"Многоугольник удален"<<endl;
  }
