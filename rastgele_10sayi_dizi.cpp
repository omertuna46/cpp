
//ÖMER TUNA ADIYAMAN

//Rastgele 10 sayi uretip, sakliyacagiz, okuyacagiz
#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int sayilar[100];

    int rasgeleSayi;
    //srand(time(0));
    srand(time(0));

    for(int i=0; i<10; i++)
    {
        rasgeleSayi = rand() % 100+1;
        cout<<rasgeleSayi<<endl;
        sayilar[i]=rasgeleSayi;
    }

    // diziyi yazdiriyoruz
    for(int i=0;i<10;i++)
    {
        cout<<"sayilar["<<i<<"]:"<<sayilar[i]<<endl;
    }

    for(int i=0;i<10;i++)
    {
        if(sayilar[i]%5==0) cout<<sayilar[i]<<endl;
    }

    return 0;
}
