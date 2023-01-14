#include <iostream>
using namespace std;

int main(){
	char grade;
	
	cout << "masukan grade :";
	cin >> grade;
	
	switch (grade){
		case 'A':
		cout << "Nilai kamu sangat bagus";
		break;
		case 'B':
		cout << "Nilai kamu bagus";
		break;
		case 'C':
		cout << "Nilai kamu cukup";
		break;
		case 'D':
		case 'E':
		cout << "Kamu remidi";
		break;
		default:
		cout << "Grade salah!";
	}
}
