#include <iostream>

using namespace std;

void chislo()                            
{
    int ch;
    cout << "������� ����������� �����" << endl;                            
    cin >> ch;
    for (int i = 0; i < 5; i++)                           
    {
        cout << ch % 10 << endl;
        ch = ch / 10;
    }
    cout << endl;
}

void registr()                                                   
{
    char a;                                                                 
    cout << "������� ��������� ����� � ������ ��������:" << endl;
    cin >> a;
    a -= 32;                                                                
    cout << "����� � ������� ��������: " << a << endl << endl;                      
}

void srarifm()                                                             
{
    const int n = 10;                                                    
    int sum = 0;                                                            
    int arr[n];                                                 
    for (int i = 0; i < n; i++)                                          
        arr[i] = rand() % 20;
    cout << "������: " << endl;                                 
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
    for (int i = 0; i < n; i++)                                        
        sum += arr[i];
    cout << "������� �������������� ������� = " << double(sum) / n << endl;        
}

int main()
{
    setlocale(LC_ALL, "RUS");
    chislo();
    registr();
    srarifm ();
}
