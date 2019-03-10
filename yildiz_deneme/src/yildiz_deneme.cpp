//============================================================================
// Name        : yildiz_deneme.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int sayac=0;
	for(int i=0;i<=10;i++) {
		int sayac2 = 0;
		for(int j=0;j<=20;j++) {

			if(sayac == 2 && sayac2==2 ) {
				cout << "    ";
				sayac2++;
				continue;

			}else if(sayac == 3 && sayac2 == 2) {
				cout << "    ";
				sayac2++;
				continue;

			}else if(sayac == 4 && sayac2 == 2) {
				cout << "    ";
				sayac2++;
				continue;

			}else if(sayac == 4 && sayac2 == 3) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 4 && sayac2 == 4) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 5 && sayac2 == 4) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 6 && sayac2 == 4) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 6 && sayac2 == 5) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 6 && sayac2 == 6) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 6 && sayac2 == 7) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 6 && sayac2 == 8) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 5 && sayac2 == 8) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 5 && sayac2 == 9) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 5 && sayac2 == 10) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 4 && sayac2 == 10) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 3 && sayac2 == 10) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 3 && sayac2 == 11) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 3 && sayac2 == 12) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 3 && sayac2 == 13) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 3 && sayac2 == 14) {
				cout << "    ";
				sayac2++;
				continue;
			}else if(sayac == 3 && sayac2 == 15) {
				cout << "    ";
				sayac2++;
				continue;
			}
			cout << "**  ";

			sayac2++;
		}
		cout << "" << sayac << endl;
		sayac++;
	}
	return 0;
}
