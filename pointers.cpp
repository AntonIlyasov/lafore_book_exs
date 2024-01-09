#include <iostream>
#include <cstring>
using namespace std;

// void dispstr ( char* ps )
// {
//   while( *ps )
//   cout << *ps++;
//   cout << endl;
// }

// class String
// {
// private:
//   char* str;

// public:
//   String ( char* s )
//   {
//     int length = strlen ( s );
//     str = new char [ length + 1 ];  // выделяем необходимую память
//     strcpy ( str, s );
//   }
//   ~String ( )
//   {
//     cout << "Удаляем строку\n";
//     delete [] str;                   // освобождаем память
//   }
//   void display ( )
//   {
//     cout << str << endl;
//   }
// };

// int main ()
// {
//   // char *str1 = "У бездельников всегда есть свободное время!";
//   // char str2[] = "У бездельников всегда есть свободное время.";
//   // // dispstr ( str1 ); //передача по указателю
//   // dispstr ( str2 ); //указатель передается по значению, в функции будет его копия

//   char* str = "Дурная голова ногам покоя не дает.";
//   int len = strlen ( str );
//   cout << "len = " << len << endl;
//   char* ptr = new char [len];   // выделим память
//   strcpy ( ptr, str );
//   int len2 = strlen ( str );
//   cout << "ptr = " << ptr << endl;    // покажем что содержится в ptr
//   cout << "len2 = " << len2 << endl;
//   delete [] ptr;                      // освободим выделенную память


//   String s1 = "Тише едешь – дальше будешь.";
//   cout << "s1 = ";
//   s1.display ( );

//   int *pa = new int;



//   return 0;
// }

//Указатели на объекты!!!!!!!!!!!!!!!

// class Distance
// {
// private:
//   int feet;
//   float inches;
// public:
//   void getdist ( )
//   {
//   cout << "\nВведите футы: "; cin >> feet;
//   cout << "Введите дюймы: "; cin >> inches;
//   }
//   void showdist ( ) // вывод информации
//   { cout << feet << "\'-" << inches << '\"'; }
// };


// int main ()
// {
//   Distance dist;
//   // определяем объект типа Distance
//   dist.getdist ( );                 // получаем информацию
//   dist.showdist ( );                // выводим на экран

//   Distance* distptr = new Distance; // создаем объект Distance
//   distptr->getdist ( );
//   distptr->showdist ( );            // выводим информацию
//   cout << endl;

//   Distance dist2 = *( new Distance );
//   dist2.getdist ( );
//   dist2.showdist ( );
  

//   return 0;
// }


//массив указателей на объекты!!!!!!!!!!!!!!!

// class person // класс человек
// {
// private:
//   char name [ 40 ];
// public:
//   void setName ( )
//   {
//     cout << "Введите имя: ";
//     cin >> name;
//   }
//   void printName ( )
//   {
//     cout << "\n Имя: " << name;
//   }
// };

// int main()
// {
//   person* persPtr [ 100 ]; // массив указателей
//   int n = 0;
//   char choice;
//   do
//   {
//     persPtr [ n ] = new person;
//     persPtr [ n ]->setName ( );
//     n++;
//     // увеличиваем количество
//     cout << "Продолжаем ввод (д/н)?"; // спрашиваем, закончен ли ввод
//     cin >> choice;
//   } while ( choice == 'д' );
//   for ( int j = 0; j < n; j++ )
//   {
//     cout << "\nИнформация о номере " << j + 1;
//     persPtr [ j ]->printName ( );
//   }
//   cout << endl;
//   return 0;
// }

//связный список!!!!!!!!!!!!!!

struct link           // один элемент списка
{
  int data;
  link* next;
};

class linklist        // список
{
private:
  link* first;
public:
  linklist()
  {
    first = nullptr;     // первого элемента пока нет
  }

  void additem ( int d ){
    link* newlink = new link;   // выделяем память
    newlink->data = d;          // запоминаем данные
    newlink->next = first;      // запоминаем значение first
    first = newlink;            // first теперь указывает на новый элемент
  }

  void display ( ){
    link* current = first;
    while( current )
    {
      cout << current->data << endl;
      current = current->next;
    }
  }
};

int main ( )
{
  linklist li;
  li.additem ( 25 );
  li.additem ( 36 );
  li.additem ( 49 );
  li.additem ( 64 );
  li.display ( );
}

//Классы, содержащие сами себя!!!!!!!!!!!!!!

