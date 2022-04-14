//объявление класса
class Matrix
{
private:
  int m=4;
  int M[4][4];
  // int a[4][4];
public:
  Matrix(); //конструктор класса
  void show(); //вывод матрицы матрицы
  void NachMatr(); // начальная матрица
  void TraMat(); //транспонирование
  void YmnMat(int); //умножение
  void IzmTochZn(int,int,int); //изменение значений
  // void SetMat(); //set-функция
  // void GetMat(); //get-функция
  // Matrix(const Matrix &obj) //копирование
  ~Matrix(); //деструктор
};
