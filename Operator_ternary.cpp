#include <iostream>
using namespace std;

int main(){
	int jawaban;
	
	cout << " Apakah hasil dari 3 + 4 ?" << endl;
	cout << " Jawab = ";
	cin >> jawaban;
	
	string hasil = (jawaban == 7) ? "Benar" : "Salah";
	cout << "Jawaban anda: " << hasil <<endl;
}