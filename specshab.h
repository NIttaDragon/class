#include <iostream>
#include <string>
using namespace std;

template <typename T> class CArray
{
public:
  int x;
  T* a;
  T l;
    CArray() // конструктор
    {
      cout<<"Введите размер массива "<<endl;
      cin>>x;
        a= new T[x];
    };
    ~CArray(){}; //деструктор
    T& operator[] (int i); //перегрузка оператора индексации
    template <typename Tr>friend ostream& // перегрузка вывода
      operator<<(ostream& stream, CArray <Tr>& arr);
    void Get(/*int y, T l*/)
    {
      for(int i=0;i<x;i++)
      {
        cout<<"Введите значение"<<endl;
        cin>>l;
        a[i]=l;
      }
    };
    void Show()
    {
      for(int i=0;i<x;i++)
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    };
};
