#include <iostream>
using namespace std;

//перегрузка унарных операций!!!!

// class Counter
// {
// private:
//   unsigned int count;
// // значение счетчика
// public:
//   Counter ( ) : count ( 0 ) // конструктор
//   { }
//   unsigned int get_count ( ) // получить значение
//   { return count; }
//   Counter operator++ ( ) // увеличить значение
//   {
//     Counter temp;
//     ++count;
//     temp.count = count;
//     return temp;
//   }
// } ;

// class Counter
// {
// private:
//   unsigned int count;
// public:
//   Counter () : count (0) {}
//   Counter (int c) : count (c) {}
//   unsigned int get_count (){
//     return count;
//   }
  // Counter operator++ (){            // префиксная перегрузка
  //   return Counter (count);         // возвращение бузымянного объекта
  // }

//   Counter operator++ ( )
//   {
//     return Counter ( ++count );     // префиксная перегрузка
//   }

//   Counter operator++ ( int )
//   {
//     return Counter ( count++ );     // постфиксная перегрузка
//   }
// };


// int main()
// {
//   Counter c1, c2;
//   c2 = c1++;
//   cout << "\nc1 = " << c1.get_count ( ); // снова показываем значения
//   cout << "\nc2 = " << c2.get_count ( ) << endl;

//   return 0;
// }

//перегрузка бинарных операций!!!!!
// class Distance 
// {
// private:
//   int feet;
//   float inches;
// public:

//   Distance ( ) : feet ( 0 ), inches ( 0.0 )
//   { }

//   Distance ( int ft, float in ) : feet ( ft ), inches ( in )
//   { }

//   void getdist ( )
//   {
//     cout << "\nВведите футы: "; cin >> feet;
//     cout << "Введите дюймы: "; cin >> inches;
//   }

//   void showdist ( )
//   { cout << feet << "\'-" << inches << '\"'; }

//   Distance operator+ ( Distance d2 ) const
//   {
//     int f = feet + d2.feet;

//     float i = inches + d2.inches;
//     if ( i >= 12.0 )
//     {
//       i -= 12.0;
//       f++;
//     }
//     return Distance ( f, i );                     // временный объект
//   }

//   bool operator< ( Distance d2 ) const
//   {
//     float bf1 = feet + inches / 12;
//     float bf2 = d2.feet + d2.inches / 12;
//     return ( bf1 < bf2 ) ? true : false;
//   }

//   void operator+= ( Distance d2 )
//   {
//     feet += d2.feet;
//     inches += d2.inches;
//     if ( inches >= 12.0 )
//     {
//       inches -= 12.0;
//       feet++;
//     }
//   }
// };

// int main ( )
// {
//   Distance distance, dist3;
//   distance.getdist ( );
//   Distance dist2 ( 11, 6.25 );
//   dist3 = distance + dist2;
//   cout << "dist3 = "; dist3.showdist ( );
//   string a = "13";
//   string b = "25";
//   cout << a + b;
//   return 0;
// }

// const int LIMIT = 100;

// class safearray
// {
// private:
//   int arr [ LIMIT ];
// public:
//   int& operator[ ] (int n)
//   {
//     if ( n < 0 || n >= LIMIT ){
//       cout << "\nОшибочный индекс!"; exit ( 1 );
//     }
//     return arr [ n ];
//   }
// };

// int main ( )
// {
//   safearray sa1;

//   for (int j = 0; j < LIMIT; j++){
//     sa1[ j ] = j * 10;
//   }

//   for (int j = 0; j < LIMIT; j++){
//     int temp = sa1 [ j ];
//     cout << "Элемент " << j << " равен " << temp << endl;
//   }

//   return 0;
// }

// преобразование типов !!!!!!!!!!

// int main ( ){
//   int a = 5;
//   float b = 3.3;
//   a = b;
//   a = static_cast<int>( b );
//   cout << a;


//   return 0;
// }

// class Distance
// {
// private:
//   const float MTF;
//   int feet;
//   float inches;
// public:
//   Distance ( ) : feet ( 0 ), inches ( 0.0 ), MTF ( 3.280833F ){}

//   Distance ( float meters ) : MTF ( 3.280833F )       //explicit - не допустит преобразование float к Distance
//   {
//     float fltfeet = MTF * meters;
//     feet = int ( fltfeet );
//     inches = 12 * ( fltfeet - feet );
//   }

//   Distance ( int ft, float in ) : feet ( ft ), inches ( in ), MTF ( 3.280833F ){}

//   void getdist ( )
//   {
//     cout << "\nВведите футы: "; cin >> feet;
//     cout << "Введите дюймы: "; cin >> inches;
//   }

//   void showdist ( ) const{
//     cout << feet << "\'-" << inches << '\"';
//   }

//   operator float ( ) const                              // операция преобразования
//   {
//     float fracfeet = inches / 12;
//     fracfeet += static_cast<float>(feet);
//     return fracfeet / MTF;
//   }
// };

// int main ()
// {
//   float meters;
//   Distance distance = 2.35F;                            // используется конструктор, переводящий метры в футы и дюймы
//   cout << "\ndistance = "; distance.showdist ( );
//   meters = static_cast<float>( distance );              // используем оператор перевода в метры
//   cout << "\ndistance = " << meters << " meters\n";
//   Distance dist2 ( 5, 10.25 );                          // используем конструктор с двумя параметрами
//   meters = dist2;                                       // неявно используем перевод типа
//   cout << "\ndist2 = " << meters << " meters\n";
//                                                         // dist2 = meters; // а вот это ошибка – так делать нельзя
//   return 0;
// }

//Перегрузка оператора присваивания!!!!!!!!!!!!!!!
// class alpha
// {
// private:
//   int data;
// public:
//   alpha()
//   { }

//   alpha(int d)
//   { data = d; }

//   void display()
//   { cout << data; }

//   void operator = (alpha& a)
//   {
//     data = a.data;
//     cout << "\nЗапущен оператор присваивания";
//   }
// };

// int main()
// {
//   alpha a1(37);
//   alpha a2;

//   a2 = a1;
//   cout << "\na2=";
//   a2.display();
// }

//Конструктор копирования!!!!!!!!!!!!!!!!!

// class alpha
// {
// private:
//   int data;
// public:
//   alpha()
//   { }

//   alpha(int d)
//   { data = d; }

//   alpha(alpha& a)     //вызывается всякий раз, когда создается копия объекта
//   {
//     this->data = a.data;
//     cout << "\nЗапущен конструктор копирования";
//   }

//   void display()
//   { cout << data; }

//   alpha operator = (alpha& a)
//   {
//     data = a.data;
//     cout << "\nЗапущен оператор присваивания";
//     return *this;
//   }
// };

// int main()
// {
//   alpha a1(37);
//   alpha a2;
//   alpha a3(a1);

//   a2 = a1;
//   a1 = a1;
//   cout << "\na2=";
//   a2.display();

//   cout << "\na3=";
//   a3.display();
// }

//typeID!!!!!!!!!!!!!!!!!!!!!!!

class Base
{
  virtual void virtFunc() // для нужд typeid - class Base д.б. полиморфным
  { }
};

class Derv1 : public Base
{ };

class Derv2 : public Base
{ };

void displayName(Base* pB)
{
  cout << "указатель на объект класса ";  // вывести имя класса
  cout << typeid(*pB).name() << endl;     //на который
                                          //указывает pB
}

int main()
{
  Base* pBase = new Derv1;
  displayName(pBase); //"указатель на объект класса Derv1"
  pBase = new Derv2;
  displayName(pBase); //" указатель на объект класса Derv2"
  return 0;
}