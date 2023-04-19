
//ÖMER TUNA ADIYAMAN

#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int rasgeleSayi;
    //srand(time(0));
    srand(time(0));
    // 1 ile 100 arasi sayi uretmek icin 100'e gore modunu aliyoruz
    rasgeleSayi = rand() % 100+50; // 1 ile 100 arasi sayi uretmek

    cout<<rasgeleSayi<<endl;

    return 0;
}
