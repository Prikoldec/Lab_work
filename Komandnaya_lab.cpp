#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

class Individual
{
public:
    string _firstname;           
    string _surname;             
    string _patronymic;          
    string _dateOfBirth;         
    string _phoneNumber;         
    string _email;               
    string _comment;             

    void input();                
    void output();               
    void getName();

    Individual(
        string firstname = "Oleg",
        string surname = "Vasilev",
        string patronymic = "Petrovich",
        string dateOfBirth = "01.01.2020",
        string phoneNumber = "89234567890",
        string email = "eample@expale.example",
        string comment = "comment"
    );
    ~Individual();
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Individual::
Individual(
    string firstname,
    string surname,
    string patronymic,
    string dateOfBirth,
    string phoneNumber,
    string email,
    string comment
) {
    _firstname = firstname;
    _surname = surname;
    _patronymic = patronymic;
    _dateOfBirth = dateOfBirth;
    _phoneNumber = phoneNumber;
    _email = email;
    _comment = comment;
}

Individual::~Individual()
{

}

void Individual::input()
{
    cout << "Vvedite imya: ";
    cin >> _firstname;

    cout << "Vvedite familiu: ";
    cin >> _surname;

    cout << "Vvedite otchestvo: ";
    cin >> _patronymic;

    cout << "Vvedite datu rozhdeniya: ";
    cin >> _dateOfBirth;

    cout << "Vvedite telefon: ";
    cin >> _phoneNumber;

    cout << "Vvedite email (opcionalno, dlya propuska vvedite '-'): ";
    cin >> _email;

    cout << "Vvedite commentari (opcionalno, dlya propuska vvedite '-'): ";
    cin >> _comment;

    cout << endl;
    cout << "Zapis dobavlena!" << endl;
}

void Individual::getName()
{
    cout << _surname << " " << _firstname << " " << _patronymic << endl;
}

void Individual::output()
{
    cout << "           Imya: " << _firstname << endl;
    cout << "       Familiya: " << _surname << endl;
    cout << "      Otchestvo: " << _patronymic << endl;
    cout << "Data rozhdeniya: " << _dateOfBirth << endl;

    cout << " Nomer telefona: " << _phoneNumber << endl;
    cout << "          Email: " << _email << endl;

    cout << "     Commentari: " << _comment << endl;
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class Emergency
{
public:
    string _phoneNumber;
    string _name;
    string _purpose;

    void input();
    void output();
    void getName();
    //    string get_purpose(string _purpose);

    Emergency(
        string phoneNumber = "89674883654",
        string name = "prikol",
        string purpose = "primer"
    );
    ~Emergency();
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


Emergency::
Emergency(
    string phoneNumber,
    string name,
    string purpose
) {
    _phoneNumber = phoneNumber;
    _name = name;
    _purpose = purpose;
}

//string get_purpose(string _purpose)
//{
//    return _purpose;
//}

void Emergency::input()
{
    cout << "Vvedite nazvanie ekstrennoi sluzhbi: ";
    cin >> _name;
    cout << "Vvedite nomer telefona: ";
    cin >> _phoneNumber;
    cout << "Vvedite naznachenie sluzhbi: ";
    cin >> _purpose;

    cout << endl;
    cout << "Zapis dobavlena!" << endl;
}

void Emergency::output()
{
    cout << "Nazvanie ekstrennoi sluzhbi: " << _name << endl;
    cout << "             Nomer telefona: " << _phoneNumber << endl;
    cout << "                Naznachenie: " << _purpose << endl;
}

Emergency::~Emergency()
{

}

void Emergency::getName()
{
    cout << _name << endl;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class Entity
{
public:
    string _name;
    string _number;
    string _email;
    string _schedule; 
    string _comment;

    void input();
    void output();
    void getName();

    Entity(
        string name = "Trol",
        string number = "89164588554",
        string email = "laky@mail.ru",
        string schedule = "8:00 - 18:00",
        string comment = "***"
    );
    ~Entity();
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


Entity::
Entity(
    string name,
    string number,
    string email,
    string schedule,
    string comment
) {
    _name = name;
    _number = number;
    _email = email;
    _schedule = schedule;
    _comment = comment;
}

Entity::~Entity()
{

}

void  Entity::input()
{
    cout << "Vvedite nazvanie: ";
    cin >> _name;
    cout << "Vvedite nomer telefona: ";
    cin >> _number;
    cout << "Vvedite email (opcionalno, dlya propuska vvedite '-'): ";
    cin >> _email;
    cout << "Vvedite grafik raboti: ";
    cin >> _schedule;
    cout << "Vvedite primechanie: ";
    cin >> _comment;
}
//-----------------------------------------------
void  Entity::output()
{
    cout << "      Nazvanie: " << _name << endl;
    cout << "Nomer telefona: " << _number << endl;
    cout << "         Email: " << _email << endl;
    cout << " Grafik raboti: " << _schedule << endl;
    cout << "   Primechanie: " << _comment << endl;
}

void Entity::getName()
{
    cout << _name << endl;
}


int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    vector<Individual> Individual_list{ Individual("Sergei","Plotnikov", "Olegovich", "01.01.2001", "+7(923)456-78-90", "example@email.com", "commentari") };
    Individual_list.emplace_back("Arina", "Peda", "Sergeevna", "19.05.2001", "+7(923)456-78-90", "example@email.com", "commentari");
    Individual_list.emplace_back("Anzhelika", "Basova", "Valerievna", "01.09.2001", "+7(923)456-78-90", "example@email.com", "commentari");
    Individual_list.emplace_back("Aleksei", "Torbin", "Kakoitovich", "26.11.2001", "+7(923)456-78-90", "example@email.com", "commentari");

    vector<Entity> Entity_list{ Entity("FGBOU VO GUU",  "8(495)377-89-14", "info@guu.ru", "09:00 - 18:00", "Luchshi vuz strani") };
    Entity_list.emplace_back("Samsung", "8(555)555-35-35", "info@samsung.com", "02:00 - 18:00", "primechanie");
    Entity_list.emplace_back("IIS", "8(495)377-89-14", "iis@guu.ru", "03:00 - 18:00", "Eto Vikhino, eto UVAO, eto nash GUU, lubim mi ego");

    vector<Emergency> Emergency_list{ Emergency("+7(923)456-78-90", "Komenda", "Ugnetat") };
    Emergency_list.emplace_back("+7(923)456-78-90", "Ohrannik", "Rano vstaet");
    Emergency_list.emplace_back("+7(923)456-78-90", "MedKabinet", "Chipiruet");


    do {
        cout << "1)   Fizicheskie lica - vvedite 'f'" << endl;
        cout << "2)  Uridicheskie lica - vvedite 'y'" << endl;
        cout << "3) Ekstrennie sluzhbi - vvedite 'e'" << endl;
        cout << "vvedite 'q' dlya vihoda" << endl;
        cout << "vvedite bukvu: ";
        char case_input;
        cin >> case_input;
        system("cls");
        switch (case_input) {
        case 'f': {
            do {
                cout << "  Prosmotr zapisei - vvedite 'w'" << endl;
                cout << "    Poisk kontakta - vvedite 's'" << endl;
                cout << " Dobavlenie zapisi - vvedite 'a'" << endl;
                cout << "Vernutsya k spisku - vvedite 'l'" << endl;
                cin >> case_input;
                system("cls");
                switch (case_input) {
                case 'w': {
                    for (int i = 0; i < Individual_list.size(); i++) {
                        cout << i + 1 << ") ";
                        Individual_list[i].getName();
                    }
                    cout << endl;
                    cout << "Vvedite nomer zapisi, kotoruu hotite prosmotret" << endl;
                    int record;
                    cin >> record;
                    system("cls");
                    Individual_list[record - 1].output();
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 's': {
                    string search_firstname;
                    string search_secondname;
                    string search_patronymic;
                    cout << "vvedite imya: ";
                    cin >> search_firstname;
                    cout << "vvedite familiu: ";
                    cin >> search_secondname;
                    cout << "vvedite otchestvo: ";
                    cin >> search_patronymic;

                    int count = 0;
                    for (int i = 0; i < Individual_list.size(); i++) {
                        if (search_firstname == Individual_list[i]._firstname &&
                            search_secondname == Individual_list[i]._surname &&
                            search_patronymic == Individual_list[i]._patronymic) {
                            cout << "Nomer zapisi: " << i + 1 << endl;
                            Individual_list[i].output();
                        }
                        else {
                            count++;
                        }
                    }
                    if (count == Individual_list.size()) {
                        cout << "Net sovpadeni";
                    }
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 'a': {
                    Individual input;
                    input.input();
                    Individual_list.emplace_back(input);
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 'l': {
                    break;
                }
                default:
                    cout << "Nevernoe znachenie vvoda" << endl;
                    break;
                }
                if (case_input == 'l') {
                    system("cls");
                    break;
                }
            } while (true);
            break;
        }
        case 'y': {
            do {
                cout << "  Prosmotr zapisei - vvedite 'w'" << endl;
                cout << "    Poisk kontakta - vvedite 's'" << endl;
                cout << " Dobavlenie zapisi - vvedite 'a'" << endl;
                cout << "Vernutsya k spisku - vvedite 'l'" << endl;
                cin >> case_input;
                system("cls");
                switch (case_input) {
                case 'w': {
                    for (int i = 0; i < Entity_list.size(); i++) {
                        cout << i + 1 << ") ";
                        Entity_list[i].getName();
                    }
                    cout << endl;
                    cout << "Vvedite nomer zapisi, kotoruu hotite prosmotret" << endl;
                    int record;
                    cin >> record;
                    system("cls");
                    Entity_list[record - 1].output();
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 's': {
                    string search_name;
                    cout << "vvedite imya: ";
                    cin >> search_name;

                    int count = 0;
                    for (int i = 0; i < Entity_list.size(); i++) {
                        if (search_name == Entity_list[i]._name) {
                            cout << "Nomer zapisi: " << i + 1 << endl;
                            Entity_list[i].output();
                        }
                        else {
                            count++;
                        }
                    }
                    if (count == Entity_list.size()) {
                        cout << "Net sovpadeni";
                    }
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 'a': {
                    Entity input;
                    input.input();
                    Entity_list.emplace_back(input);
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 'l': {
                    break;
                }
                default:
                    cout << "nevernoe znachenie vvoda" << endl;
                    break;
                }
                if (case_input == 'l') {
                    system("cls");
                    break;
                }
            } while (true);
            break;
        }
        case 'e': {
            do {
                cout << "  Prosmotr zapisei - vvedite 'w'" << endl;
                cout << "    Poisk kontakta - vvedite 's'" << endl;
                cout << " Dobavlenie zapisi - vvedite 'a'" << endl;
                cout << "Vernutsya k spisku - vvedite'l'" << endl;
                cin >> case_input;
                system("cls");
                switch (case_input) {
                case 'w': {
                    for (int i = 0; i < Emergency_list.size(); i++) {
                        cout << i + 1 << ") ";
                        Emergency_list[i].getName();
                    }
                    cout << endl;
                    cout << "Vvedite nomer zapisi, kotoruu hotite prosmotret" << endl;
                    int record;
                    cin >> record;
                    system("cls");
                    Emergency_list[record - 1].output();
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 's': {
                    string search_purpose;
                    cout << "Vvedite naznachenie sluzhbi: ";
                    cin >> search_purpose;

                    int count = 0;
                    for (int i = 0; i < Emergency_list.size(); i++) {
                        if (search_purpose == Emergency_list[i]._purpose) {
                            cout << "Nomer zapisi: " << i + 1 << endl;
                            Emergency_list[i].output();
                        }
                        else {
                            count++;
                        }
                    }
                    if (count == Emergency_list.size()) {
                        cout << "Net sovpadeni";
                    }
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 'a': {
                    Emergency input;
                    input.input();
                    Emergency_list.emplace_back(input);
                    cout << endl;
                    cout << "Vvedite 'b', chtobi vernutsya nazad" << endl;
                    cin >> case_input;
                    system("cls");
                    if (case_input == 'b')
                        break;
                }
                case 'l': {
                    break;
                }
                default:
                    cout << "Nevernoe znachenie vvoda" << endl;
                    break;
                }
                if (case_input == 'l') {
                    system("cls");
                    break;
                }
            } while (true);
            break;
        }
        case 'q': {
            cout << "Do vstrechi!" << endl;
            exit(0);
        }
        default:
            cout << "Nevernoe znachenie vvoda" << endl;
            break;
        }
    } while (true);
}
