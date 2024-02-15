// #include <iostream>
// #include <fstream>
// using namespace std;

// int SomeVar;        //объявление и определение в одном флаконе
// extern int someVar; //только объявление

// //файл A
// int globalVar;           //Определение в файле A
// //файл В
// extern int globalVar;   //Объявление в файле B
// globalVar = 3;          //Вот теперь все хорошо

// //файл A
// static int globalVar; //определение: переменная видна только в A
// //файл В
// static int globalVar; //определение: переменная видна только в В

// //файл A
// extern const int conVar2 = 99; //определение
// //файл В
// extern const int conVar2;       //объявление

// //fileH.h
// extern int gloVar;  //объявление переменной
// int gloFunc(int);   //объявление функции
// //fileA.cpp
// int gloVar; //определение переменной
// int gloFunc(int n)  //определение функции
// { return n; }
// //fileB.cpp
// #include "fileH.h"
// gloVar = 5; //работа с переменной
// int gloVraB=gloFunc(gloVar); //работа с функцией

// namespace geo
// {
//     const double PI = 3.14159;
//     double circumf(double radius){ 
//         return 2 * PI * radius;
//     }
// } //конец пространства
// double c = geo::circumf(10); //полный порядок

// void seriousCalcs()
// {
//     using namespace geo;
//     double с = circumf(10); //OK
// }
// double с = circumf(10); //Не работает

// namespace beta
// {
//     int uno;
// }
// int beta::dos;

// //fileA.cpp
// namespace       //неименованное пространство, для fileA.cpp
// {
//     int gloVar = 111;
// }
// funcA()
// {cout << gloVar; } //Выводит: 111
// //fileB.cpp
// namespace       //неименованное пространство, для fileB.cpp
// {
//     int gloVar = 222;
// }
// funcB()
// {cout << gloVar; } //Выводит: 222

// typedef unsigned long unlong;
// unlong var1, var2;

// int *p1, *p2, *p3;      //обычное объявление
// typedef int* ptrInt;    //новое имя для указателя на int
// ptrInt p1, p2, p3;      //упрощенное объявление

#include "verylong.h"

int main(){
  unsigned long numb, j;
  verylong fact = 1;        //инициализировать verylong
  cout << "\n\nВведите число: ";
  cin >> numb;              //ввод числа типа long int
  for(j = numb; j > 0; j--)
    fact = fact * j;
  cout << "Факториал= ";
  fact.putvl();
  cout << endl;
  return 0;
}