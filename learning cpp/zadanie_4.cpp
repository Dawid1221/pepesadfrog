// this program doesn't work :(
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int rok;
	cout << "Podaj rok zeby sprawdzic czy jest przystepny: ";
	cin >> rok;
	if(rok%4==0 && rok%100!=0 || rok%400==0){
		cout << "ten rok jest przystepny";
	}
	else{
		cout < "ten rok nie jest przystepny";
	}
	
	
	return 0;
}
