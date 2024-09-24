#include<iostream>
using namespace std;

int main (){
    int i, j, pilihan;
    int utama[2][6] = 
    {
        {1,1,0,0,0,0},
        {0,0,0,1,1,0},
    };
    int bisnis[3][6] = 
    {
        {0,0,1,1,0,0},
        {0,0,1,1,0,0},
        {0,0,0,0,0,0},
    };
    int ekonomi[10][6] = 
    {
        {0,0,0,1,1,1},
        {0,0,1,0,0,0},
        {0,0,1,0,0,0},
        {1,1,0,0,0,1},
        {0,0,0,0,1,1},
        {0,0,1,1,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,1,1},
        {0,0,0,0,1,0},
        {1,1,1,0,1,0},
    };

    cout<<"kelas kursi tersedia : "<<endl;
    cout<<"1. utama"<<endl;
    cout<<"2. bisnis"<<endl;
    cout<<"3. ekonomi"<<endl;
    cout<<"pilih kelas kursi anda : ";
    cin>>pilihan;

    if (pilihan == 1)
    {
        cout<<"anda memilih kelas utama"<<endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout<<utama[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"ketikkan baris kursi anda : ";
        cin>>i;
        cout<<"ketikkan kolom kursi anda : ";
        cin>>j;

        utama[i][j]++;

        if (utama[i][j] > 1)
        {
            cout<<"mohon pilih kursi lain"<<endl;
        }
        else
        {
            cout<<"terima kasih"<<endl;
        }
    }
    else if (pilihan == 2)
    {
        cout<<"anda memilih kelas bisnis"<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout<<bisnis[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"ketikkan baris kursi anda : ";
        cin>>i;
        cout<<"ketikkan kolom kursi anda : ";
        cin>>j;

        bisnis[i][j]++;

        if (bisnis[i][j] > 1)
        {
            cout<<"mohon pilih kursi lain"<<endl;
        }
        else
        {
            cout<<"terima kasih"<<endl;
        }
    }
    else if (pilihan == 3)
    {
        cout<<"anda memilih kelas ekonomi"<<endl;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout<<ekonomi[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"ketikkan baris kursi anda : ";
        cin>>i;
        cout<<"ketikkan kolom kursi anda : ";
        cin>>j;

        ekonomi[i][j]++;

        if (ekonomi[i][j] > 1)
        {
            cout<<"mohon pilih kursi lain"<<endl;
        }
        else
        {
            cout<<"terima kasih"<<endl;
        }
    }
}