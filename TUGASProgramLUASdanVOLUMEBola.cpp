#include <iostream>
#define phi 3.14
using namespace std;
main()
{
    float jari;
    float LP;
    float Volume;

    cout <<"Hitung Luas Permukaan dan Volume Bola \n\n";
    cout <<"Masukkan jari-jari:"; cin>> jari; 

    LP=4*phi*jari*jari;
    Volume=4/(float)3*phi*jari*jari*jari;

    cout <<"\n Hasil Luas Permukaan Bola : "<<LP;
    cout <<"\n Hasil Volume Bola         : "<<Volume;
}