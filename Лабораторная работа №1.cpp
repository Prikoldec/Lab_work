#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void chetnie()                                
{
    int array[10];                  
    for (int i = 0; i < 10; i++)
        array[i] = rand() % 20;         
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < 10; i++)
        cout << array[i] << ' ';
    cout << endl;

    for (int i = 0; i < 10; i++)         
        if (array[i] % 2 == 0) array[i] = 0;
    cout << "Массив после замены: " << endl;
    for (int i = 0; i < 10; i++)
        cout << array[i] << ' ';
    cout << endl;
}


void simvol()                                     
{
    string a, b;                                     
    int m;                                             
    cout << endl << "Введите один символ:" << endl;
    do {
        cin >> a;
        if (a.size() > 1) 
           {                                               
               cout << "Некорректный ввод! Введите один символ:" << endl;
               a.clear();
            }
          else break;
          } while (true);

    cout << "Введите строку:" << endl;
    do {
        cin >> b;
        if (b.size() < 2) 
            {                                              
                cout << "Ошибка! Введите строку:" << endl;
                b.clear();
            }
        else break;
           } while (true);

    m = b.find(a);                                 
    if (m < 0) cout << "Символа в строке нет" << endl;
    else cout << "Символ занимает " << m + 1 << " позицию" << endl;
}

void opredelel()                                 
{
    int a[3][3];                                            
    int opred;                                               
    cout << endl << "Заполните матрицу 3 на 3 целыми числами" << endl;        
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < 3; i++)                         
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
            cout << setw(4) << a[i][j];
    }
    
    opred= a[0][0] * a[1][1] * a[2][2] + a[2][0] * a[0][1] * a[1][2] + a[1][0] * a[2][1] * a[0][2] - a[2][0] * a[1][1] * a[0][2] - a[0][0] * a[2][1] * a[1][2] - a[1][0] * a[0][1] * a[2][2];
    cout << endl << "Определитель матрицы = " << opred << endl;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    chetnie();
    simvol();
    opredelel();
}

