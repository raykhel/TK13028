#include<iostream>
using namespace std;

int tambah (int x, int y){
    int tam;

    tam = x + y;
    return tam;
}

int faktorial(int n){
    int i, fak = 1;

    for(i= n; i>=1; i--){
        fak = fak*i;
    }
    return fak;
}

float average(float a, float b, float c){
    float rata;

    rata = (a+b+c)/3;
    return rata;
}

int main (){
    int x, y, fa, ta, nilai, pilihan;
    string username;
    string password;
    float a, b, c, rt;

	cout<<"username : ";
	cin>>username;	
	cout<<"password : ";
	cin>>password;
	if (username == "ray" && password == "12345"){
		cout<<"selamat datang "<<username<<endl;
		cout<<"1. faktorial"<<endl;
		cout<<"2. pertambahan"<<endl;
		cout<<"3. rata-rata"<<endl;
		cout<<"4. exit"<<endl;
		cout<<"pilih menu yang diinginkan : ";
		cin>>pilihan;
		if (pilihan == 1){
			cout<<"nilai : ";
			cin>>nilai;
		
			fa = faktorial(nilai);
		
			cout<<"faktorial dari "<<nilai<<" adalah "<<fa<<endl;
		}
		else if (pilihan == 2){
			cout<<"nilai x : ";
			cin>>x;
			cout<<"nilai y : ";
			cin>>y;
		
			ta = tambah(x, y);
		
			cout<<"pertambahan dari "<<x<<" tambah "<<y<<" adalah "<<ta<<endl;
		}
		else if (pilihan == 3){
			cout<<"nilai a :";
			cin>>a;
	
			cout<<"nilai b :";
			cin>>b;
		
			cout<<"nilai c :";
			cin>>c;
		
			rt = average(a, b, c);
		
			cout<<"nilai rata-rata dari ("<<a<<" "<<b<<" "<<c<<") adalah "<<rt<<endl;
		}
	}
	else{
		cout<<"username atau password salah"<<endl;
	}
}