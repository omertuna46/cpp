/*

Dort islemi ayri ayri fonksiyonlar halinde yapan hesap makinesi

      ÖMER TUNA ADIYAMAN

*/
#include<iostream>
using namespace std;

int carpma(int a, int b)
{
     return a*b ;
}
int toplama(int a, int b)
{
     return a+b;
}
int cikarma(int a, int b)
{
    return a-b;
}
int bolme(int a, int b)
{
    return a/b;
}

int main()
{
    // Kullanicidan iki sayi iste
    // dort islem yaptir

    int sayi1, sayi2;

    cout<<"Birinci sayiyi giriniz: "; cin>>sayi1;
    cout<<"Ikinci sayiyi giriniz: "; cin>>sayi2;

    cout<<carpma(sayi1,sayi2)<<endl;
    cout<<toplama(sayi1,sayi2)<<endl;
    cout<<cikarma(sayi1,sayi2)<<endl;
    cout<<bolme(sayi1,sayi2)<<endl;

    return 0;
}
