#include <iostream>
using namespace std;

main()
{
    float Celcius;
    float Fahrenheit;
    float Kelvin;
    float Reamur;

    cout<<"Masukkan Suhu Awal (dalam Celcius) = "; cin>>Celcius;

    Fahrenheit = (9/5*Celcius)+32;
    Kelvin = 273+Celcius;
    Reamur = (4/9*Celcius)+32;

    cout<<"Suhu Fahrenheit= "<<Fahrenheit<<endl;
    cout<<"Suhu Kelvin= "<<Kelvin<<endl;
    cout<<"Suhu Reamur= "<<Reamur<<endl;
    
    
}