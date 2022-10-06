#include<iostream>
using namespace std;

class Primos{
public:
	Primos();
	void Menu();
	void Numeros();

private:
	int opc;
	int i;
	int t;

};

Primos::Primos(){
	opc = 0; i = 0; t = 0;
}
void Primos::Numeros() {
	if (i > 0) {
		for (int j = 1; j <= i; j++) {
			if (j != 1) {
				for (int k = 2; k < j / 2; k++) {
					if (j % k == 0) {
						t = 0;
					}
					else {
						t = 1;
					}
				}
				if (t == 1) {
					cout << j << endl;
					t = 0;
				}
			}
			if (j == 2 || j == 3) {
				cout << j << endl;
			}
		}
	}else {
		cout << "El numero rango debe ser mayor a 0" << endl;
	}
}
void Primos::Menu(){
	do {
		system("cls");
		cout << "Numeros primos by Zavala" << endl;
		cout << "Rango de busqueda: " << endl;
		cin >> i;
		cout << endl;

		Numeros();

		cout << endl;
		cout << "Quiere repetir el programa?" << endl;
		cout << "1.-Si :D" << endl;
		cout << "2.-No D:" << endl;
		cin >> opc;
	} while (opc != 2);
}







int main() {
	Primos primos;
	primos.Menu();
}