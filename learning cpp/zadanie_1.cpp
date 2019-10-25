// program is working very well 
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	string imie1, imie2;
	int wiek1, wiek2;
	cout << "Podaj wiek pierwszego studenta: " << endl;
	cin >> wiek1;
	cout << "Podaj imie pierwszego studenta: " << endl;
	cin >> imie1;
	cout << "Podaj wiek drugiego studenta: " << endl;
	cin >> wiek2;
	cout << "Podaj imie pierwszego studenta: " << endl;
	cin >> imie2;
	if (wiek1>0){
	
	if (wiek2>0){
	if (wiek1==wiek2){
		cout <<imie1<<" ma tyle samo lat co "<<imie2;
	}
	else{
	
	if(wiek1>wiek2){

		cout <<imie1<<" jest starszy niz "<<imie2;
	}	
	else{
		cout <<imie1<<" jest mlodszy niz "<<imie2;
	}
}
		
	}
	else{
		cout << "Wiek musi byc wiekszy niz zero";
	}
	
	
    }
	else
	{
	cout << "Wiek musi byc wiekszy niz zero";
	}
	return 0;
}
