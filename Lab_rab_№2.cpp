#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void uravnenie()                                    
{
    int a = 1, b = 3, c = -4;                        
    double x1, x2;                                    
    int d = b * b - 4 * a * c;                     
    if (d > 0)                                           
    {
        x1 = (((-b) - sqrt(d)) / (2 * a));
        x2 = (((-b) + sqrt(d)) / (2 * a));
        cout << "Pervii koren = " << x1 << endl << "Vtoroi koren = " << x2 << endl;
    }
    if (d == 0)                               
    {
        x1 = ((-b) / (2 * a));
        cout << "Koren = " << x1 << endl;
    }
    if (d < 0)                                    
    {
        cout << "Kornei net" << endl;
    }
}

int chislo()                                              
{
    int a = -10, b = 15;                            
    return (rand() % (b - a + 1) + a);        
}

void sortirovka()                                      
{
    int arr[10];                                           
    int t;                                                       
    for (int i = 0; i < 10; i++)                     
        arr[i] = chislo();
    cout << "Sortirovka:" << endl << "Ishodni massiv: " << endl;
    for (int i = 0; i < 10; i++)                    
        cout << arr[i] << ' ';
    cout << endl;
    for (int i = 0; i < 10 - 1; i++)                
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    cout  << "Otsortirovanni massiv: " << endl;  
    for (int i = 0; i < 10; i++)                    
        cout << arr[i] << ' ';
    cout << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Korni uravneniya: " << endl;
    uravnenie();
    cout << endl << endl;
    cout <<  "Sluchainoe chislo: " << chislo() << ' ';
    cout << endl << endl;
    sortirovka();
}
