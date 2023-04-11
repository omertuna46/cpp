#include<iostream>
using namespace std;

int main()
{

    for(int sayac=1; sayac<=20; sayac++)
    {
        if(sayac%2 == 0)
            cout<<sayac<< " sayi cift"<< endl;
        else
            cout<<sayac<<" sayi tek"<<endl;
    }

    return 0;
}
