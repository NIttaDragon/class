#include <iostream>
#include "prem.h"
using namespace std;
int i,j;
  Matrix::Matrix() //конструктор
  { }
  void Matrix::show() //вывод на экран матрицы
  {
    for (i=0;i<m;i++)
    {
      for (j=0;j<m;j++)
        cout<<M[i][j]<<" ";
      cout<<endl;
    }
  };
  void Matrix::NachMatr() //начальная матрица
  {
    for (i=0;i<m;i++)
      for (j=0;j<m;j++)
        M[i][j]=0;
  };
  void Matrix::TraMat() //транспонирование матрицы
  {
    int a=0;
    for(i=0;i<m;i++)
      for(j=i;j<m;j++)
      {
        a=M[i][j];
        M[i][j]=M[j][i];
        M[j][i]=a;
      }
  };
  void Matrix::YmnMat(int c) //умножение матрицы
  {
    for(i=0;i<m;i++)
      for(j=0;j<m;j++)
        M[i][j]=M[i][j]*c;
  };
  void Matrix::IzmTochZn(int x,int y,int z) //изменение точечного значения
  {
    for(i=0;i<m;i++)
      for(j=0;j<m;j++)
        if((i==x)&&(j==y))
          M[i][j]=z;
  };
  // void Matrix::SetMat()
  // {
  //
  // };
  // void Matrix::GetMat()
  // {
  //
  // };
  //копирование матрицы
  // Matrix::Matrix(const Matrix &obj)
  // {
  //   for(i=0;i<m;i++)
  //     for(j=0;j<m;j++)
  //       {
  //         &M[i][j]=new int;
  //         *M[i][j]= *obj.M[i][j];
  //       }
  //   cout<<"Матрица скопирована"<<endl;
  //   // M = obj.M;
  //   // for(i=0;i<m;i++)
  //   //   for(j=0;j<m;j++)
  //   //     M[i][j]= obj.M[i][j];
  // }
  Matrix::~Matrix() //деструктор
  {
    cout<<"Матрица удалена"<<endl;
  }
