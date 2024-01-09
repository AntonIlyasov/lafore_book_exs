#include <iostream>
using namespace std;

// наследование !!!!!!!!!!!!

// class Counter
// {
// protected:
//   unsigned int count;
// public:
//   Counter () : count (0) {std::cout << "Counter\n";}
//   Counter (int c) : count (c) {}
//   unsigned int get_count (){
//     return count;
//   }

//   Counter operator++ ( )
//   {
//     return Counter ( ++count );     // префиксная перегрузка
//   }

//   Counter operator++ ( int )
//   {
//     return Counter ( count++ );     // постфиксная перегрузка
//   }
// };

// class CountDn : public Counter//производный класс
// {
// public:
  // CountDn () {
  //   std::cout << "CountDn";
  // }
  // Counter operator-- (){
  //   return Counter ( --count );
  // }
// };

//Конструкторы производного класса!!!!!!!!!!!!!

// class Counter
// {
// protected:
//   unsigned int count;
// public:
//   Counter () : count (0) {std::cout << "Counter\n";}
//   Counter (int c) : count (c) {}
//   unsigned int get_count (){
//     return count;
//   }

//   Counter operator++ ( )
//   {
//     return Counter ( ++count );     // префиксная перегрузка
//   }

//   Counter operator++ ( int )
//   {
//     return Counter ( count++ );     // постфиксная перегрузка
//   }

//   void foo(){
//     std::cout << "\nCounter\n";
//   }
// };

// class CountDn : private Counter//производный класс
// {
// public:

//   CountDn ( )
//   // конструктор без параметров
//   { }

//   CountDn ( int c ) : Counter ( c )// конструктор с одним параметром
//   { }

//   Counter operator-- (){
//     return Counter ( --count );
//   }

//   void foo(){
//     std::cout << "\nCountDn\n";
//     Counter::foo();                   //вызов функции foo Counter
//   }
// };

// int main ()
// {
//   CountDn c1(2);
//   cout << "\n c1=" << c1.get_count ( );
//   c1.foo();

//   return 0;
// }

//Комбинации доступа!!!!!!!!!!!!!

// class A {
// private:
//   int privdataA;
// protected:
//   int protdataA;
// public:
//   int pubdataA;
//   void fooA(){}
// };

// class B : public A {
// public:
//   void funct ()
//   {
//     int a;
//     a = privdataA;    // ошибка, нет доступа
//     a = protdataA;    // так можно
//     a = pubdataA;     // так можно
//     A::fooA();
//   }
// };

// class C : private A{
// public:
//   void funct ( )
//   {
//     int a;
//     a = privdataA;  // ошибка, нет доступа
//     a = protdataA;  // так можно
//     a = pubdataA;   // так можно
//     A::fooA();
//   }
// };

// int main ( )
// {
//   int a;
 
//   B objB;
//   a = objB.privdataA; // ошибка, нет доступа
//   a = objB.protdataA; // ошибка, нет доступа
//   a = objB.pubdataA;

//   C objC;
//   a = objC.privdataA;
//   a = objC.protdataA;
//   a = objC.pubdataA;

//   return 0;
// }

//Включение!!!!!!

// class Human{
// public:
//   void think(){
//     brain.think();
//   }


// private:

//   class Brain{
//   public:
//     void think(){
//       std::cout << "I think\n";
//     }
//   };

//   Brain brain;

// };

// int main(){
//   Human human;
//   human.think();

//   Human::Brain brain;

//   return 0;
// }


//множественное наследование!!!!!!!!!!!!!!
class Car{
public:
  void use(){
    std::cout << "Car\n";
  }
};

class Airplane{
public:
  void use(){
    std::cout << "Airplane\n";
  }
};

class AirplaneCar : public Car, public Airplane{
public:

};

int main(){
  AirplaneCar ac;
  ac.Airplane::use();     // 1 метод

  ((Airplane)ac).use();   // 2 метод

  Car *c = &ac;
  c->use();               // 3 метод

  return 0;
}