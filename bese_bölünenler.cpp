
//ÖMER TUNA ADIYAMAN

#include<iostream>
using namespace std;


int main()
{
    int sayilar[100];
    int elemanSayisi;

    cout<<"Kac eleman gireceksiniz:"; cin>>elemanSayisi;

    // Kullanicidan girilen bilgileri dizi icnde sakliyoruz
    for(int i=0;i<elemanSayisi;i++)
    {
        cout<<i+1<<". elemani giriniz:"; cin>>sayilar[i];
    }

    // diziyi yazdiriyoruz
    for(int i=0;i<elemanSayisi;i++)
    {
        cout<<"sayilar["<<i<<"]:"<<sayilar[i]<<endl;
    }

    for(int i=0;i<elemanSayisi;i++)
    {
        if(sayilar[i]%5==0) cout<<sayilar[i]<<endl;
    }

    return 0;

}


