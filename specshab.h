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
    T operator [] (int i)  //перегрузка оператора индексации
    {
      if(i<0||i>x-1) exit(1);
      return a[i];
    }
     // template <typename Tr> ostream& operator<<(ostream& stream, CArray <Tr>& arr)// перегрузка вывода
     //  {
     //    for(int i=0;i<x;i++)
     //      stream<<arr.a[i]<<" O_O ";
     //    return stream;
     //  }

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
        cout<<a[i]<<endl;
    };
};
