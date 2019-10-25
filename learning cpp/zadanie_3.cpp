// this program works very well

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){
	
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	
		
	int wiek;
	string imie;
	cout << "Podaj swoje imie:";
	cin >> imie;
	cout << "Podaj swoj wiek:";
	cin >> wiek;
    cout << "Witaj " << imie << " urodziles sie w " << timePtr->tm_year + 1900 - wiek << " roku" << endl;
	
	
	return 0;
}
