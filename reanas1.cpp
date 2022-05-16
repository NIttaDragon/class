#include <iostream>
#include <math.h>
#include "specnas.h"
using namespace std;
int i,j;
float v1,v2,v3,per;
  CTriangle::CTriangle) //конструктор
  {
    for(i=0;i<3;i++)
      for(j=0;j<2;j++)
        versh[i][j]=0;
  }
  CTriangle::CTriangle(int t[7][2]) //конструктор с параметром
  {
    for (i=0;i<3;i++)
      for (j=0;j<2;j++)
        versh[i][j]=t[i][j];
  }
  void CTriangle::show() //вывод на экран
  {
    for (i=0;i<3;i++)
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
    v3=sqrt(pow((versh[2][0]+versh[0][0]),2)+pow((versh[2][1]-versh[0][1]),2);
    per=v1+v2+v3;
  };
  CTriangle::~CTriangle() //деструктор
  {
    cout<<"Треугольник удален"<<endl;
  }
