#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> isian0 = { 100, 150, 200, 250, 300, 350, 400, 450 };
vector <int> isian1 = { 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800 };
vector <int> isian2 = { 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350 };
vector <int> isian3 = { 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500 };
vector <int> isian4 = { 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700 };
vector <int> isian5 = { 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700 };
vector <int> isian6 = { 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600 };
vector <int> isian7 = { 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000, 6100, 6200, 6300 };
vector <int> isian8 = { 4500, 4600, 4700, 4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000, 6100, 6200, 6300, 6400, 6500 };

int sudut0[8] = { 83, 80, 76, 73, 69, 64, 58, 45 };
int sudut1[13] = { 82, 80, 78, 77, 74, 72, 70, 68, 65, 62, 59, 55, 45 };
int sudut2[22] = { 83, 82, 81, 80, 79, 77, 76, 75, 74, 73, 71, 70, 68, 67, 65, 64, 62, 60, 68, 55, 52, 45 };
int sudut3[21] = { 83, 82, 81, 79, 78, 77, 76, 75, 73, 72, 71, 69, 68, 66, 64, 63, 61, 58, 56, 53, 46 };
int sudut4[19] = { 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 62, 61, 60, 58, 56, 54, 51, 46 };
int sudut5[24] = { 74, 73, 72, 72, 71, 70, 69, 68, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 57, 56, 54, 52, 49, 46 };
int sudut6[22] = { 69, 69, 68, 67, 67, 66, 65, 64, 63 ,63, 62, 61, 60, 59, 58, 57, 55, 54, 52, 50, 47, 45 };
int sudut7[25] = { 69, 69, 68, 68, 67, 66, 66, 65, 64, 64, 63, 62, 61, 60, 60, 59, 58, 57, 55, 54, 53, 51, 49, 47, 45 };
int sudut8[21] = { 68, 67, 66, 66, 65, 64, 64, 63, 62, 61, 61, 60, 59, 58, 57, 56, 55, 53, 52, 50, 45 };

int main() {
	int inputJarak, inputIsian, derajat;
	char c;

	while (true) {

		cout << "Input isian: (0 - 8) " << endl;
		cin >> inputIsian;

		if (inputIsian == 0) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian0.begin(), isian0.end(), inputJarak);
			derajat = result - isian0.begin();
			if (result != end(isian0)) {
				cout << "Sudut penembakan: " << sudut0[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}
		else if (inputIsian == 1) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian1.begin(), isian1.end(), inputJarak);
			derajat = result - isian1.begin();
			if (result != end(isian1)) {
				cout << "Sudut penembakan: " << sudut1[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}

		else if (inputIsian == 2) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian2.begin(), isian2.end(), inputJarak);
			derajat = result - isian2.begin();
			if (result != end(isian2)) {
				cout << "Sudut penembakan: " << sudut2[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}

		else if (inputIsian == 3) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian3.begin(), isian3.end(), inputJarak);
			derajat = result - isian3.begin();
			if (result != end(isian3)) {
				cout << "Sudut penembakan: " << sudut3[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}

		else if (inputIsian == 4) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian4.begin(), isian4.end(), inputJarak);
			derajat = result - isian4.begin();
			if (result != end(isian4)) {
				cout << "Sudut penembakan: " << sudut4[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}

		else if (inputIsian == 5) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian5.begin(), isian5.end(), inputJarak);
			derajat = result - isian5.begin();
			if (result != end(isian5)) {
				cout << "Sudut penembakan: " << sudut5[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}

		else if (inputIsian == 6) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian6.begin(), isian6.end(), inputJarak);
			derajat = result - isian6.begin();
			if (result != end(isian6)) {
				cout << "Sudut penembakan: " << sudut6[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}

		else if (inputIsian == 7) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian7.begin(), isian7.end(), inputJarak);
			derajat = result - isian7.begin();
			if (result != end(isian7)) {
				cout << "Sudut penembakan: " << sudut7[derajat] << " Derajat" << endl;
			}
			else {
				cout << "Jarak di luar range." << endl;
			}
		}

		else if (inputIsian == 8) {
			cout << "Input jarak: " << endl;
			cin >> inputJarak;
			auto result = find(isian8.begin(), isian8.end(), inputJarak);
			derajat = result - isian8.begin();
			if (result != end(isian8)) {
			cout << "Sudut penembakan: " << sudut8[derajat] << " Derajat" << endl;
			}
			else {
			cout << "Jarak di luar range." << endl;
			}
		}

		else {
		cout << "Input isian salah." << endl;
		}



		cout << "Ulang pembidikan? (y/n)" << endl;
		cin >> c;
		system("CLS");

		if (c == 'n') {
			break;
		}
	}


}