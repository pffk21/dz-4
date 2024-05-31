//задание 1
//class Human {
//    char* name;
//    char* surname;
//    int age;
//
//public:
//    Human();
//    Human(const char* n, const char* s, int a);
//    ~Human();
//    void Print();
//};
//
//Human::Human() {
//    name = surname = 0;
//    age = 0;
//}
//
//Human::Human(const char* n, const char* s, int a) {
//    name = new char[strlen(n) + 1];
//    strncpy(name, n, strlen(n) + 1);
//    surname = new char[strlen(s) + 1];
//    strncpy(surname, s, strlen(s) + 1);
//    age = a;
//}
//
//void Human::Print() {
//    cout << name << "\t" << surname << "\t" << age << endl;
//}
//Human::~Human()
//{
//    delete[] name;
//    delete[] surname;
//}
//class Flat {
//    Human* zhitely;
//    int vsego;
//    int count;
//
//public:
//    Flat(int vse);
//    ~Flat();
//    void zhitely1(const Human& h);
//    void Print2();
//};
//
//Flat::Flat(int vse) : vsego(vse), count(0) {}
//
//
//Flat::~Flat()
//{
//    delete[] zhitely;
//}
//
//void Flat::zhitely1(const Human& h)
//{
//    if (count < vsego)
//    {
//        zhitely[count++] = h;
//    }
//
//}
//
//void Flat::Print2()
//{
//    for (int i = 0; i < count; ++i)
//    {
//        zhitely[i].Print();
//    }
//}
//
//class House
//{
//    Flat* cvartira;
//    int vsego;
//    int count1=1;
//
//public:
//    House(int vse);
//    ~House();
//    void cvartira1(const Flat& h);
//    void Print3();
//};
//
//House::House(int vse) : vsego(vse), count1(1) {}
//
//
//House::~House()
//{
//    delete[] cvartira;
//}
//
//void House::Print3()
//{
//    for (int i = 0; i < count1; ++i)
//    {
//         cout<<"1";
//    }
//}
//
//
//
//int main()
//{
//    Human a("Bill", "Ers", 30);
//    Human b("Dwon", "Still", 55);
//    Human c("Tina", "Genry", 25);
//    a.Print();
//    b.Print();
//    c.Print();
//    Flat flat1(4);
//    flat1.zhitely1(a);
//    flat1.zhitely1(b);
//    flat1.zhitely1(c);
//    cout << "Жильцы в 1 кв:" << endl;
//    flat1.Print2();
//    House house1(30);
//    cout << "Заселенно кв: ";
//    house1.Print3();
//    cout<<endl;
//
//}












//задание2


//class Reservoir {
//private:
//    string name;
//    double width;
//    double length;
//    double depth;
//
//public:
//    Reservoir() : width(0), length(0), depth(0) {}
//    Reservoir(const string& name, double width, double length, double depth) : name(name), width(width), length(length), depth(depth) {}
//    double obem()
//    {
//        return width * length * depth;
//    }
//    double plozha()
//    {
//        return width * length;
//    }
//
//    string getName()
//    {
//        return name;
//    }
//};
//
//int main() {
//    Reservoir reka("mississippi", 20.0, 230.0, 50.0);
//    cout << "Название - " << reka.getName() << ": " << reka.obem()<<endl;
//    cout << "Площадь - " << reka.getName() << ": " << reka.plozha() <<endl;
//    Reservoir ozero("Балқаш", 4.0, 30.0, 5.0);
//    cout << "Название - " << ozero.getName() << ": " << ozero.obem() << endl;
//    cout << "Площадь - " << ozero.getName() << ": " << ozero.plozha() << endl;
//    if (reka.plozha()==ozero.plozha()) {
//        cout << "Одного типа"<<endl;
//    }
//    else {
//        cout << "Разного типа"<<endl;
//    }
//
//
//}