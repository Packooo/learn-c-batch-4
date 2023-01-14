#include <iostream>
using namespace std;

int main(){
	string password;
	
	cout << "===Login WIFI===" << endl;
	cout << "Masukan password : " ;
	cin >> password;
	
	//percabangan if
	if (password == "amikom"){
	cout << "selamat login wifi berhasil !" << endl;	
	}
}