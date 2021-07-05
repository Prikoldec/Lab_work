#include <iostream>

using namespace std;

void chislo()                            
{
    int ch;
    cout << "Vvedite pyatiznachnoe chislo" << endl;                            
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
    cout << "Vvedite english bukvu v nizhnem registre:" << endl;
    cin >> a;
    a -= 32;                                                                
    cout << "Bukva v verhnem registre: " << a << endl << endl;                      
}

void srarifm()                                                             
{
    const int n = 10;                                                    
    int sum = 0;                                                            
    int arr[n];                                                 
    for (int i = 0; i < n; i++)                                          
        arr[i] = rand() % 20;
    cout << "Massiv: " << endl;                                 
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
    for (int i = 0; i < n; i++)                                        
        sum += arr[i];
    cout << "Srednee arifmeticheskoe massiva = " << double(sum) / n << endl;        
}

int main()
{
    setlocale(LC_ALL, "RUS");
    chislo();
    registr();
    srarifm ();
}
