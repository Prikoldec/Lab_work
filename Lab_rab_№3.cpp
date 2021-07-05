#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int chislo()         
{
    int a = -10, b = 15;                            
    return (rand() % (b - a + 1) + a);              
}

void isklOtricChisel()                            
{
    int* arr1;                                           
    int* arr2;                                           
    int n = 10;                                          
    int k = 0;                                            
    arr1 = new int[10];
    for (int i = 0; i < n; i++)                    
        arr1[i] = chislo();
   cout << "Ishodni massiv: " << endl;
    for (int i = 0; i < 10; i++)                  
        cout << arr1[i] << ' ';

    for (int i = 0; i < 10; i++)                  
        if (arr1[i] > 0) k++;                       
    arr2 = new int[k];                            
    int k1 = 0;                                          
    for (int i = 0; i < n; i++)                     
        if (arr1[i] > 0)
        {
            arr2[k1] = arr1[i];                     
            k1++;                                          
        }
    delete[]arr1;                                     
    cout << endl;
    cout << "Massiv bez otricatelnih chisel: " << endl;
    for (int i = 0; i < k; i++)                     
        cout << arr2[i] << ' ';
}

void glasnStrok()                                   
{
    string stroka;                                              
    string liter;                                          
    int i, j;                                                  
    string glasn = "";                               
    stroka = "Primernaya stroka simvolov";                
    liter = "UOIEAuyoiea";                                   

    for (int i = 0; i < stroka.length(); i++)             
        for (j = 0; j < liter.length(); j++)                  
            if (liter[j] == stroka[i])                             
            {
                glasn += stroka[i];
            }
    cout << endl << "Stroka: " << stroka << endl;
    cout << "Glasnie: " << glasn << endl;                          
}

int main()
{
    setlocale(LC_ALL, "RUS");
    isklOtricChisel();
    cout << endl << endl;
    glasnStrok();
}

