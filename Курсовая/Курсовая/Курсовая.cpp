#include <iostream>
#include <string>

using namespace std; 
class Music_lovers_guide //Довідник меломана. 
{
public:
    string name, Name, Description;
    int Year;

    Music_lovers_guide()
    {
        name = "СПРАВОЧНИК МЕЛОМАНА";
    }
    string get_name() { return name; }
};
class AC_DC :public Music_lovers_guide
{
public:

    AC_DC()
    {
        Name = "AC/DC";
        Year = 1973;
        Description = "AC/DC — австралийская рок-группа, сформированная в Сиднее в ноябре 1973 года выходцами из Шотландии, братьями Малькольмом и Ангусом Янгами.";
    }

    string get_Name() { return Name; }
    int get_Year() { return Year; }
    string get_Description() { return Description; }
};
class Powerwolf :public Music_lovers_guide
{
public:
    Powerwolf()
    {
        Name = "Powerwolf";
        Year = 2003;
        Description = "Powerwolf — пауэр-хеви-метал-группа из Германии. Основана в 2003 году в городе Саарбрюккен членами Red Aim. Творчество коллектива базируется на сочетании христианских мотивов с мрачными хоровыми вставками и органными партиями.";
    }

    string get_Name() { return Name; }
    int get_Year() { return Year; }
    string get_Description() { return Description; }
};
class Kiss :public Music_lovers_guide
{
public:
    Kiss()
    {
        Name = "Kiss";
        Year = 1973;
        Description = "Kiss — американская рок-группа, основанная в Нью-Йорке в январе 1973 года, играющая в жанрах глэм-рок и хард-рок. Широко известна развитием направления шок-рок, сценическими макияжами её участников, а также концертными шоу, сопровождающимися различными пиротехническими эффектами.";
    }

    string get_Name() { return Name; }
    int get_Year() { return Year; }
    string get_Description() { return Description; }
};
class Metallica :public Music_lovers_guide
{
public:
    Metallica()
    {
        Name = "Metallica";
        Year = 1981;
        Description = "Metallica — американская метал-группа, образованная в 1981 году, в Лос-Анджелесе. Metallica оказала большое влияние на развитие метала и входит в «большую четвёрку трэш-метала».";
    }

    string get_Name() { return Name; }
    int get_Year() { return Year; }
    string get_Description() { return Description; }
};
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "\n";
    Music_lovers_guide a;
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" <<a.get_name() <<"\n";
    cout << "\n";
    AC_DC b;
    cout << "№1" << "\n";
    cout <<"Название групы:"<< b.get_Name()<<"\n";
    cout << "Год основания групы:"<< b.get_Year() << "\n";
    cout << "Описание групы:" << b.get_Description() << "\n";
    cout << "\n";
    Powerwolf c;
    cout << "№2" << "\n";
    cout << "Название групы:" << c.get_Name() << "\n";
    cout << "Год основания групы:" << c.get_Year() << "\n";
    cout << "Описание групы:" << c.get_Description() << "\n";
    cout << "\n";
    Kiss d;
    cout << "№3" << "\n";
    cout << "Название групы:" << d.get_Name() << "\n";
    cout << "Год основания групы:" << d.get_Year() << "\n";
    cout << "Описание групы:" << d.get_Description() << "\n";
    cout << "\n";
    Metallica e;
    cout << "№4" << "\n";
    cout << "Название групы:" << e.get_Name() << "\n";
    cout << "Год основания групы:" << e.get_Year() << "\n";
    cout << "Описание групы:" << e.get_Description() << "\n";
}