#include <iostream>
using namespace std;
//спецификация
class Matrix
{
  int m_m=4;
  int m_M[4][4];
public:
  Matrix(); //конструктор класса
  Matrix(int t[4][4]); //конструктор с параметром
  void show(); //вывод матрицы матрицы
  void NachMatr(); // начальная матрица
  void TraMat(); //транспонирование
  void YmnMat(int); //умножение
  int getelem(int i, int j){return m_M[i][j];}
  void IzmTochZn(int,int,int); //изменение значений
  Matrix(const Matrix &obj); //копирование
  ~Matrix(); //деструктор
  friend ostream &operator<<(ostream &stream, Matrix obj); //перегрузка оператора
};
//реализация
int i,j;
  Matrix::Matrix() //конструктор
  {
    for (i=0;i<m_m;i++)
      for (j=0;j<m_m;j++)
        m_M[i][j]=0;
  }
  Matrix::Matrix(int t[4][4]) //конструктор с параметром
  {
    for (i=0;i<m_m;i++)
      for (j=0;j<m_m;j++)
        m_M[i][j]=t[i][j];
  }
  void Matrix::show() //вывод на экран матрицы
  {
    for (i=0;i<m_m;i++)
    {
      for (j=0;j<m_m;j++)
        cout<<m_M[i][j]<<" ";
      cout<<endl;
    }
  };
  void Matrix::NachMatr() //начальная матрица
  {
    for (i=0;i<m_m;i++)
      for (j=0;j<m_m;j++)
        m_M[i][j]=0;
  };
  void Matrix::TraMat() //транспонирование матрицы
  {
    int a=0;
    for(i=0;i<m_m;i++)
      for(j=i;j<m_m;j++)
      {
        a=m_M[i][j];
        m_M[i][j]=m_M[j][i];
        m_M[j][i]=a;
      }
  };
  void Matrix::YmnMat(int c) //умножение матрицы
  {
    for(i=0;i<m_m;i++)
      for(j=0;j<m_m;j++)
        m_M[i][j]=m_M[i][j]*c;
  };
  void Matrix::IzmTochZn(int x,int y,int z) //изменение точечного значения
  {
    for(i=0;i<m_m;i++)
      for(j=0;j<m_m;j++)
        if((i==x)&&(j==y))
          m_M[i][j]=z;
  };
  Matrix::Matrix(const Matrix &obj) //копирование матрицы
  {
    for(i=0;i<m_m;i++)
      for(j=0;j<m_m;j++)
          m_M[i][j]= obj.m_M[i][j];
    cout<<"Матрица скопирована"<<endl;
  }
  Matrix::~Matrix() //деструктор
  {
    cout<<"Матрица удалена"<<endl;
  }
  ostream &operator<<(ostream &stream, Matrix obj) //перегрузка
  {
    for(i=0;i<obj.m_m;i++)
    {
      for(j=0;j<obj.m_m;j++)
        stream<<obj.m_M[i][j]<<"   " ;
      stream<<endl;
    }
    return stream;
  }
//главная прога
int main()
{
  Matrix M; //объявление объекта класса
  int c,k,b,x,y,z;
  int t[4][4];
  cout<<"Начальная матрица"<<endl; //заполнение значениями
  for (int i=0;i<4;i++)
    for(int j=0;j<4;j++)
      t[i][j]=i*j;

  Matrix M1(t);
  cout<<"o-o"<<M;

  Matrix * M2 = new Matrix;
  cout<<"^-^";
  M2->show();
  /*
  M.NachMatr();
  M.show();
  while (k!=0)
  {
    cout<<endl;
    cout<<"Что хотите сделать с матрицей:"<<endl;
    cout<<"1. Умножить"<<endl;
    cout<<"2. Транспонировать"<<endl;
    cout<<"3. Изменить точечное значение в матрице"<<endl;
    cout<<"4. Скопировать матрицу"<<endl;
    cout<<"5. Вернуть начальную матрицу"<<endl;
    cout<<"6. Ничего, завершить программу"<<endl;
    cout<<"Ваш выбор: ";
    cin>>b;
    switch (b)
    {
      case 1:
      {
        cout<<endl; //Умножение матрицы
        cout<<"Введите число, на которое нужно умножить матрицу: ";
        cin>>c;
        cout<<endl;
        cout<<"Умноженная матрица: "<<endl;
        M.YmnMat(c);
        M.show();
        break;
      }
      case 2:
      {
        cout<<endl; //Транспонирование матрицы
        cout<<"Транспонированная матрица: "<<endl;
        M.TraMat();
        M.show();
        break;
      }
      case 3:
      {
        cout<<endl; //точесное изменение элемента матрицы
        cout<<"Введите номер элемента, который хотите изменить "<<endl;
        cout<<"Номер строки: ";
        cin>>x;
        cout<<"Номер столбца: ";
        cin>>y;
        if ((x>4)||(y>4))
          cout<<"Ошибка номера элемента, выход за границу значений. Попробуйте ввести другие значения."<<endl;
        else
        {
          cout<<"Введите новое значение элемента: ";
          cin>>z;
        }
        M.IzmTochZn((x-1),(y-1),z);
        M.show();
        break;
      }
      case 4:
      {
        cout<<endl; // копирование матрицы
        Matrix matr=M;
        break;
      }
      case 5:
      {
        cout<<endl; //вывод начальной матрицы
        cout<<"Начальная матрица"<<endl;
        M.NachMatr();
        M.show();
        break;
      }
      case 6:
      {
        k=0;
        break;
      }
    }
  }*/
  return 0;
}
