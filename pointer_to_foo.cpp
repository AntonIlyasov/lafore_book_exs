#include <iostream>
using namespace std;

//!!!!!!!!!!!!!!!!!!! Указатель на функцию в качестве параметра. Передача функции в качестве параметра. С++ Урок #65

// void foo1(){
//   std::cout << "void foo1(){\n";
// }

// void foo2(){
//   std::cout << "void foo2(){\n";
// }

// void foo3(int a){
//   std::cout << "void foo3(){\n";
// }

// string DataFromBD(){
//   return "DataFromBD\n";
// }

// string DataFromWeb(){
//   return "DataFromWeb\n";
// }

// void showInfo(string(*foo)()){
//   cout << foo() << "\n";
// }

// int main(){

//   void(*fooPointer)();  // указатель на функцию типа void, и не принимает параметров

//   void(*fooPointer1)(int);  // указатель на функцию типа void, и 1 параметр


//   fooPointer = foo2;
//   fooPointer1 = foo3;


//   fooPointer();         // вызов функции, на которую он ссылается 

//   // зачем это нужно
//   showInfo(DataFromWeb);

//   return 0;

// }

//!!!!!!!!!!!!!!!!!!!  std::function | Полиморфная обёртка функции | Изучение С++ для начинающих. Урок #142 

// std::function - полиморфная обертка для функций
// объект такого класса может хранить, копировать любой вызываемый объект (функцию, метод класса, лямбда выражение)
// некий аналог указателя на функцию из мира ООП

// #include <functional>
// #include <vector>

// void foo(){
//     std::cout << "foo()\n";
// }

// void bar(){
//     std::cout << "bar()\n";
// }

// int sum(int a, int b){
//     return a + b;
// }

// void foo1(int a){
//     if (a > 10 && a < 40){
//         cout << a << "\n";
//     }
// }

// void foo2(int a){
//     if (a % 2 == 0){
//         cout << a << "\n";
//     }
// }

// void doWork(vector<int> &vc, function<void(int)> f){
//     for (auto el : vc){
//         f(el);
//     }
// }

// void doWork2(vector<int> &vc, vector<function<void(int)>> &fVec){
//     for (auto el : vc){
//         for (auto fel : fVec){
//             fel(el);
//         }
//     }
// }

// int main(){
//     // std::function<void()> f;    // f - указатель на функцию
//     // std::function<int(int, int)> fs;    // f - указатель на функцию
//     // fs = sum;
//     // f = bar;                    // должна соблюдаться сигнатура
//     // f();
//     // cout << fs(1,2) << "\n";

//     vector<int> v = {1,51,4,10,44,98,8,12,22,29,49};
//     vector<function<void(int)>> fvec = {foo1, foo2};
//     // doWork(v, foo2);
//     doWork2(v, fvec);
// }

//!!!!!!!!!!!!!!!!  Лямбда-выражения | Лямбда функции | Анонимные функции | Изучение С++ для начинающих. Урок #143 

#include <functional>
#include <vector>

void foo1(int a){
    if (a > 10 && a < 40){
        cout << "foo1(int a) = " << a << "\n";
    }
}

void doWork(vector<int> &vc, function<void(int)> f){
    for (auto el : vc){
        f(el);
    }
}

int main(){

    [](){};             // [] - для захвата переменных из внешнего контекста во внутренний,
                        // () - для аргументов,
                        // {} - тело функции. Анон функцию никак не вызвать
                        // можем передать параметром в другую функцию

    int p = 0;

    auto ff = [&p](int a){                                                  // c c++14
        cout << "anonim foo with a = " << a << "\n";
        p = 5;
        cout << p << "\n";
    };

    std::function<void(int)> f; 

    f = [](int a){                                      // лямбда ф-я - указатель на функцию
        cout << "anonim foo with a = " << a << "\n";
    };

    vector<int> v = {1,51,4,10,44,98,8,12,22,29,49};

    // doWork(v, f);

    // или вот так

    // doWork(v, [](int a){
    //     cout << "anonim foo with a = " << a << "\n";
    // });

    doWork(v, [](int a){
        if (a % 2 == 0){
            cout << "lymbda = " << a << "\n";
        }   
    });

    ff(10);

    auto fRetV = [](){
        cout << "ANONIM\n";
        return 1;
    };

    auto q = fRetV();
    cout << q << "\n";

    return 0;
}