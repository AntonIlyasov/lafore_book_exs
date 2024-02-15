#pragma once

#include <iostream>
#include <string.h>   //для strlen()и т. п.
#include <stdlib.h>   //для ltoa()
#include <stdio.h>

using namespace std;

const int SZ = 1000;  //максимальное число разрядов

class verylong{       //класс сверхбольших чисел
private:
  char vlstr[SZ];     //число как строка
  int vlen;           //длина строки verylong
  verylong multdigit(const int) const;  //умножает сверхбольшое число на цифру
  verylong mult10(const verylong) const;  //умножает сверхбольшое число на 10

public:
  verylong() : vlen(0){
    vlstr[0]='\0';
  }
  verylong(const char s[]){
    strcpy(vlstr, s);
    vlen = strlen(s);
  }
  verylong(const unsigned long n){
    // ltoa(n, vlstr, 10); //перевести в строку
    // strrev(vlstr);      //перевернуть ее
    vlen=strlen(vlstr); //найти длину
  }
  void putvl() const;   //вывести число
  void getvl();         //получить число от пользователя
  verylong operator + (const verylong); //сложить числа
  verylong operator * (const verylong); //умножить числа
};