#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void chetnie()                                
{
    int array[10];                  
    for (int i = 0; i < 10; i++)
        array[i] = rand() % 20;         
    cout << "�������� ������: " << endl;
    for (int i = 0; i < 10; i++)
        cout << array[i] << ' ';
    cout << endl;

    for (int i = 0; i < 10; i++)         
        if (array[i] % 2 == 0) array[i] = 0;
    cout << "������ ����� ������: " << endl;
    for (int i = 0; i < 10; i++)
        cout << array[i] << ' ';
    cout << endl;
}


void simvol()                                     
{
    string a, b;                                     
    int m;                                             
    cout << endl << "������� ���� ������:" << endl;
    do {
        cin >> a;
        if (a.size() > 1) 
           {                                               
               cout << "������������ ����! ������� ���� ������:" << endl;
               a.clear();
            }
          else break;
          } while (true);

    cout << "������� ������:" << endl;
    do {
        cin >> b;
        if (b.size() < 2) 
            {                                              
                cout << "������! ������� ������:" << endl;
                b.clear();
            }
        else break;
           } while (true);

    m = b.find(a);                                 
    if (m < 0) cout << "������� � ������ ���" << endl;
    else cout << "������ �������� " << m + 1 << " �������" << endl;
}

void opredelel()                                 
{
    int a[3][3];                                            
    int opred;                                               
    cout << endl << "��������� ������� 3 �� 3 ������ �������" << endl;        
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
    cout << endl << "������������ ������� = " << opred << endl;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    chetnie();
    simvol();
    opredelel();
}

