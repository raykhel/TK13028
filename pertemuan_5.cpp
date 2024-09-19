#include<iostream>
#include<string.h>
using namespace std;

char total (char kalimat[100]){
    int panjang;
    panjang = strlen(kalimat);
    cout<<"total huruf pada kalimat "<<kalimat<<" adalah : "<<panjang<<endl;
    return panjang;
}

char cari (char kalimat[100]){
    char alfabet;
    int i, jumlah = 0;
    cout<<"huruf yang ingin dicari : ";
    cin>>alfabet;
    for ( i = 0; i <= strlen(kalimat); i++)
    {
        if (alfabet == kalimat[i])
        {
            jumlah++;
        }
        else
        {
            cout<<"huruf tidak terdapat dalam kalimat";
        }
    }
    cout<<"jumlah huruf "<<alfabet<< " dalam kalimat adalah : "<<jumlah<<endl;
    return jumlah;
}

int main(){
    int pilihan, panjang, jumlah;
    char kalimat[100];

    cout<<"ketikkan kalimat anda : ";
    cin>>kalimat;
    cout<<"1. jumlah karakter"<<endl;
    cout<<"2. mencari huruf"<<endl;
    cout<<"ketikkan pilihan anda (1/2) : ";
    cin>>pilihan;

    if (pilihan == 1)
    {
        panjang = total(kalimat);
    }
    else if (pilihan == 2)
    {
        jumlah = cari(kalimat);
    }
}