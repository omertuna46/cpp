#include<iostream>
using namespace std;

int main()
{
    int notGir, toplam = 0, notOrtalamasi;

    for(int sayac = 1; sayac <=10; sayac++)
    {
        cout<< sayac <<". ogrencinin notunu giriniz: ";cin>> notGir;
        toplam = toplam + notGir;
    }
    notOrtalamasi = toplam / 10;

    cout <<" Not otalamasi:"<< notOrtalamasi;

    return 0;
}

