#include <iostream>
#include <cstring>
using namespace std;


//полиморфизм - когда вызов разных функций для каждого объекта разных классов, которые выглядят одинаково
// одни и те же методы, но ведут себя по разному

// class Base          //абстрактный класс - нельзя создать его объект
// //Базовый класс   - деструкторы базового класса делать виртуальными!!!!!!!!!!!
// {
// public:
//   virtual void show() = 0; //чистая виртуальная функция
//   virtual ~Base(){
//     cout << "Base удален\n";
//   }
// };

// class Derv1 : public Base //Производный класс 1
// {
// public:
//   void show(){ 
//     cout << "Derv1\n";
//   }
//   ~Derv1(){
//     { cout << "Derv1 удален\n"; }
//   }
// };

// class Derv2 : public Base //Производный класс 2
// {
// public:
//   void show(){
//     cout << "Derv2\n";
//   }
//   ~Derv2(){
//     { cout << "Derv2 удален\n"; }
//   }
// };

// int main()
// {
//   Derv1 dv1;
//   Derv2 dv2;
//   Base* ptr;

//   ptr = &dv1;
//   ptr->show();
//   ptr = &dv2;
//   ptr->show();

//   ptr = new Derv2;
//   ptr->show();
//   delete ptr;

//   return 0;
// }

//Статические функции!!!!!!!!!!!!!!

// class gamma
// {
// private:
//   static int total;
//   int id;
// public:
//   gamma()
//   {
//     total++;
//     id = total;
//   }
//   ~gamma()
//   {
//     total--;
//     cout << "Удаление ID " << id << endl;
//   }
//   static void showtotal() // статическая функция
//   {
//     cout << "Всего: " << total << endl;
//   }
//   void showid()
//   {
//     cout << "ID: " << id << endl;
//   }
// };

// int gamma::total = 0;

// int main()
// {
//   gamma g1;
//   gamma::showtotal();
//   gamma g2, g3;
//   gamma::showtotal();

//   g1.showid();
//   g2.showid();
//   g3.showid();

//   g1.showtotal();
//   return 0;
// }

// class Weapon{
// public:
//   virtual void shoot() = 0;
// };

// class Gun : public Weapon{          //классический пример полиморфизма
// public:
//   void shoot() override{
//     std::cout << "Gun\n";
//   }
// };

// class SubmachineGun: public Gun{
// public:
//   void shoot() override{
//     std::cout << "SubmachineGun\n";
//   }
// };

// class Bazuka : public Weapon{
// public:
//   void shoot() override{
//     std::cout << "Bazuka\n";
//   }
// };

// class Player{
// public:
//   void shoot(Weapon* weapon){
//     weapon->shoot();
//   }
// };

// int main(){
//   Weapon* weapon = new SubmachineGun;
//   // weapon      = new Gun;
//   Player player;
//   player.shoot(weapon);

// }

//вызов метода базового класса помеченного virtual в методах наследников
//Base_Class_Name::Method_Name

//интерфейсы!!!!!!!!!!!
class I_bicycle{                    // интерфейс по сути абстрактный класс чисто с виртуальными методами
public:
    void virtual kruti_rul() = 0;
    void virtual go()        = 0;
};

class SimpleBicycle: public I_bicycle{
public:
    void kruti_rul(){
        cout << "SimpleBicycle kruti_rul()\n";
    }
    void go(){
        cout << "SimpleBicycle go()\n";
    }
};

class SportBicycle: public I_bicycle{
public:
    void kruti_rul(){
        cout << "SportBicycle kruti_rul()\n";
    }
    void go(){
        cout << "SportBicycle go()\n";
    }
};

class Human{
public:
    void go_on(I_bicycle &b){
        cout << "kruti_rul\n";
        b.kruti_rul();  
        cout << "go\n";
        b.go();  
    }
};

int main(){

    SimpleBicycle b;

    SportBicycle sb;

    Human human;
    human.go_on(sb);

    return 0;
}