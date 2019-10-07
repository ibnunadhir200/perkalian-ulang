#include <iostream>

using namespace std ;


int main (){
	int a,b,batas=10,jumlah;
	
	cout << "Perkalian bilangan" <<endl;
	cout << "Bilangan yang akan dikalikan : " <<endl;
	cin >> b ;
	cout << "Hasil dari perkalian : " <<endl;
	for (a=0; a<=batas;a++)
	{jumlah = a*b ;
	cout <<a<<"*"<<b<<"="<<jumlah<<endl;
	}

	return 0;
}
