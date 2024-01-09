#include <iostream>
#include <fstream>
using namespace std;


// потоки!!!!!!!!!!!!!
// В C++ поток представляет собой объект некоторого класса.

// int main(){
//   cout.setf(ios::left);
//   cin.unsetf(ios::skipws);//не игнорировать разделители
//   cout << "Этот текст выровнен по левому краю\n";
//   cout << "Этот текст выровнен по левому краю\n";

//   int var = 2014;
//   cout << hex << var << endl;
//   cout.setf(ios::oct, ios::basefield);
//   cout << 1058 << endl;

//   char ch;
//   cin.get(ch);

//   int i;
//   cin >> i;

//   std::cerr << "ERROR!\n";
//   return 0;
// }

// int main()
// {
//   // char ch = 'x';
//   // int j = 77;
//   // double d = 6.02;
//   // string str1 = "Kafka"; // строки без
//   // string str2 = "Proust"; // пробелов
//   // ofstream outfile("fdata.txt"); //создать объект ofstream
  
//   // outfile << ch
//   //         // вставить (записать) данные
//   //         << j
//   //         << ' '
//   //         // пробелы между числами
//   //         << d
//   //         << str1
//   //         << ' '
//   //         // пробелы между строками
//   //         << str2;
//   // cout << "Файл записан\n";


//   // ifstream infile("fdata.txt");
//   // char ch__;
//   // int j__;
//   // double d__;
//   // string str1__;
//   // string str2__;
//   // infile >> ch__ >> j__ >> d__ >> str1__ >> str2__;

//   // cout  << ch__ << endl
//   //       << j__ << endl
//   //       << d__ << endl
//   //       << str1__ << endl
//   //       << str2__ << endl;

//   // string str = "Время – великий учитель, но, увы, "
//   // "оно убивает своих учеников. Берлиоз";
//   // ofstream outfile2("TEST.TXT");
//   // for(int j=0; j<str.size(); j++){
//   //   outfile2.put( str[j] );
//   // }

//   // char ch2;
//   // ifstream infile2("TEST.TXT");
//   // while( infile2 ){
//   //   infile2.get(ch2);
//   //   cout << ch2;
//   // }
//   // cout << endl << endl;
//   // infile2.close();
//   // infile2.open("TEST.TXT");

//   // cout << infile2.rdbuf();                  //считывает весь файл
//   // cout << endl;

//   // бинарное чтение/запись !!!!!!!!!!!!!!!!!!

//   const int MAX = 100;

//   int buff[MAX];
//   for(int j=0; j<MAX; j++){
//     buff[j] = j;
//   }

//   ofstream os("edata.dat", ios::binary);  
//   os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int) );    // reinterpret_cast - 
//                                                                 // присвоить одному типу указа-теля другой тип
//                                                                 // int intvar;
//                                                                 // float flovar;
//                                                                 // ptrint = reinterpret_cast<int*>( &flovar );
//   os.close();

//   for(int j=0; j < MAX; j++){
//     buff[j] = 0;
//   }

//   ifstream is("edata.dat", ios::binary);
//   is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
//   for(int j=0; j < MAX; j++){
//     cout << buff[j] << " ";
//   }
  
//   return 0;

// }

// бинарная запись объекта на диск!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// class person
// {
// protected:
//   char name[80];
//   short age;
//   // int *data;
// public:

//   person(){}

//   // person(int size){
//   //   data = new int[size];               // динамический массив
//   //   for (size_t i = 0; i < size; i++){
//   //     data[i] = i + 1;
//   //   }
//   // }

//   void getData()
//   {
//     cout << "Введите имя: ";      cin >> name;
//     cout << "Введите возраст: ";  cin >> age;
//   }

//   void showData()
//   {
//     cout << "Имя: " << name << endl;
//     cout << "Возраст: " << age << endl;
//     // for (size_t i = 0; i < 10; i++){
//     //   cout << data[i] << " ";
//     // }
//     // cout << endl;
//   }

//   void diskIn(int pn){
//     ifstream infile;
//     infile.open("PERSFILE.DAT", ios::binary);
//     infile.seekg( pn*sizeof(person) );
//     infile.read( (char*)this, sizeof(*this) );
//   }

//   void diskOut(){
//     ofstream outfile;
//     outfile.open("PERSFILE.DAT", ios::app | ios::binary);
//     outfile.write((char*)this,sizeof(*this));
//   }

//   static int diskCount(){
//     ifstream infile;
//     infile.open("PERSFILE.DAT", ios::binary);
//     infile.seekg(0, ios::end);
//     return (int)infile.tellg() / sizeof(person);
//   }

// };

// int main(){
//   // person pers(10);
//   // pers.getData();
//   // pers.showData();
//   // ofstream outfile("PERSON.DAT", ios::binary);
//   // outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));
//   // outfile.close();

//   // person pers2;
//   // ifstream infile("PERSON.DAT", ios::binary);
//   // infile.read( reinterpret_cast<char*>(&pers2), sizeof(pers2));
//   // pers2.showData();

//   //Ввод/вывод множества объектов!!!!!!!!!
//   char ch;
//   person pers;
//   fstream file;
//   file.open("GROUP.DAT", ios::app | ios::out | ios::in | ios::binary );

//   if(!file){                      // если ошибка, то file = 0
//     cerr << "Невозможно открыть выходной файл\n";
//     exit(1);
//   }

//   do{
//     pers.getData();
//     // file.write( reinterpret_cast<char*>(&pers), sizeof(pers) );
//     pers.diskOut();
//     // if(!file){
//     //   cerr << "Запись в файл невозможна\n";
//     //   exit(1);
//     // }
//     cout << "Продолжить ввод (y/n)? ";
//     cin >> ch;
//   } while (ch=='y');

//   // file.seekg(0);                                              // поставить указатель на начало файла
//   // file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
//   // while(!file.eof()){
//   //   pers.showData();
//   //   file.read(reinterpret_cast<char*>(&pers),sizeof(pers));
//   // }
//   // cout << endl;

//   // file.close();
//   // file.open("GROUP.DAT",ios::in|ios::binary);
//   // file.seekg(0, ios::end);
//   // int endposition = file.tellg();
//   // int n = endposition / sizeof(person);
//   // cout << "\nВ файле " << n << " человек(а)";

//   int n = person::diskCount();
//   for(int j=0; j<n; j++){
//     pers.diskIn(j);
//     pers.showData();
//   }
//   cout << endl;
//   return 0;
// }

// запись объектов разного размера!!!!!!!!!!!!!!!!!!!
// class A{
// protected:
//   int a;
// };

// class B: public A{
// private:
//   int b;
// };

// class C: public A{
// private:
//   int c1;
//   int c2;
// };

// int main(){
//   A* a_ptr [2];
//   a_ptr[0] = new B;
//   a_ptr[1] = new C;
//   ofstream outfile("TEST_A.DAT", ios::binary);
//   outfile.write( (char*)a_ptr[0], sizeof(*a_ptr[0]) );      // так нельзя(стр 573 Лафоре)
//   return 0;
// }

//  typeid()!!!!!!!!!!!!!!!!!!!!!!!!!!
const int LEN = 32;
const int MAXEM = 100;
enum employee_type {tmanager, tscientist, tlaborer};

class employee{
private:
  char name[LEN];           // фамилия работника
  unsigned long number;     // номер работника
  static int n;             // текущее число работников                 - общее для всех
  static employee* arrap[]; // массив указателей на класс работников    - общее для всех

public:
  virtual void getdata(){
    cin.ignore(10, '\n');
    cout << " Введите фамилию: "; cin >> name;
    cout << " Введите номер: "; cin >> number;
  }

  virtual void putdata(){
    cout << "\n Фамилия: " << name;
    cout << "\n Номер: " << number;
  }

  employee_type get_type();         // получить тип
  static void add();                // добавить работника
  static void display();            // вывести данные обо всех
  static void read();               // чтение из файла
  static void write();              // запись в файл
};

int employee::n = 0;
employee* employee::arrap[MAXEM];   // массив указателей на класс работников

class manager : public employee
{
private:
  char title[LEN];    // титул ("вице-президент" и т. п.)
  double dues;        // Налоги гольф-клуба
public:
  void getdata()
  {
    employee::getdata();
    cout << " Введите титул: ";   cin >> title;
    cout << " Введите налоги: ";  cin >> dues;
  }
  void putdata()
  {
    employee::putdata();
    cout << "\n Титул: " << title;
    cout << "\n Налоги гольф-клуба: " << dues;
  }
};

class scientist : public employee
{
private:
  int pubs;
public:
  void getdata()
  {
    employee::getdata();
    cout << " Введите число публикаций: "; cin >> pubs;
  }
  void putdata()
  {
    employee::putdata();
    cout << "\n Число публикаций: " << pubs;
  }
};

class laborer : public employee
{
};

//добавить работника в список (хранится в ОП)
void employee::add()
{
  char ch;
  cout << "'m' для добавления менеджера"
        "\n's' для добавления ученого"
        "\n'l' для добавления рабочего"
        "\nВаш выбор: ";
  cin >> ch;
  switch(ch)
  {
    //создать объект указанного типа
    case 'm': arrap[n] = new manager; break;
    case 's': arrap[n] = new scientist; break;
    case 'l': arrap[n] = new laborer; break;
    default: cout << "\nНеизвестный тип работника\n"; return;
  }
  arrap[n++]->getdata(); //Получить данные от пользователя
}

//Вывести данные обо всех работниках
void employee::display()
{
  for(int j = 0; j < employee::n; j++)
  {
    cout << (j+1);
    // вывести номер
    switch( arrap[j]->get_type() ) //вывести тип
    {
      case tmanager: cout << ". Тип: Менеджер"; break;
      case tscientist: cout << ". Тип: Ученый"; break;
      case tlaborer: cout << ". Тип: Рабочий"; break;
      default: cout << ". Неизвестный тип";
    }
    arrap[j]->putdata(); // Вывод данных
    cout << endl;
  }
}

//Возврат типа объекта
employee_type employee::get_type()
{
  if( typeid(*this) == typeid(manager) )
    return tmanager;
  else if( typeid(*this)==typeid(scientist) )
    return tscientist;
  else if( typeid(*this)==typeid(laborer) )
    return tlaborer;
  else {
    cerr << "\nНеправильный тип работника";
    exit(1);
  }
}

//Записать все объекты, хранящиеся в памяти, в файл
void employee::write()
{
  int size;
  cout << "Идет запись " << n << " работников.\n";
  ofstream ouf;
  ouf.open("EMPLOY.DAT", ios::trunc | ios::binary);   // ios::trunc - старое содержимое удаляется

  if(!ouf){ 
    cout << "\nНевозможно открыть файл\n";
    return;
  }

  for(int j=0; j<n; j++)                              // Для каждого объекта
  {
    switch(arrap[j]->get_type())                                      
    {
      case tmanager: size=sizeof(manager); break;
      case tscientist: size=sizeof(scientist); break;
      case tlaborer: size=sizeof(laborer); break;
    }
    ouf.write( (char*)(arrap[j]), size );               // запись объекта employee в файл
    if(!ouf){
      cout << "\nЗапись в файл невозможна\n";
      return;
    }
  }
}

//чтение всех данных из файла в память
void employee::read()
{
  int size;                                     // размер объекта employee
  employee_type etype;                          // тип работника
  ifstream inf;                                 // открыть ifstream в двоичном виде
  inf.open("EMPLOY.DAT", ios::binary);
  if(!inf)
    { cout << "\nНевозможно открыть файл\n"; return; }
  n = 0;                                        // В памяти работников нет
  while(true)
  {
    inf.read( (char*)&etype, sizeof(etype) );   // чтение типа следующего работника
    

    
    if( inf.eof() )                             // выход из цикла по EOF
      break;
    if(!inf)                                    // ошибка чтения типа
      { cout << "\nНевозможно чтение типа\n"; return; }
    switch(etype)                               // создать нового работника корректного типа
    {
      case tmanager:
        arrap[n] = new manager;
        size=sizeof(manager);
        break;
      case tscientist:
        arrap[n] = new scientist;
        size=sizeof(scientist);
        break;
      case tlaborer:
        arrap[n] = new laborer;
        size=sizeof(laborer);
        break;
      default:
        cout << "\nНеизвестный тип в файле\n";
        return;
    }
    inf.read( (char*)arrap[n], size );          // чтение данных из файла
    if(!inf)
      { cout << "\nЧтение данных из файла невозможно\n"; return; }
    n++;
  }
  cout << "Идет чтение " << n << " работников\n";
}

int main(){
  int a = 5;
  char ch;
  while(true)
  {
    cout << "'a' – добавление сведений о работнике"
    "\n'd' - вывести сведения обо всех работниках"
    "\n'w' – записать все данные в файл"
    "\n'r' – прочитать все данные из файла"
    "\n'x' - выход"
    "\nВаш выбор: ";
    cin >> ch;
    switch(ch)
    {
      case 'a':
      employee::add(); break;
      case 'd':
      employee::display(); break;
      case 'w':
      employee::write(); break;
      case 'r':
      employee::read(); break;
      case 'x': exit(0);
      default: cout << "\nНеизвестная команда";
    }
  }
  return 0;
}


