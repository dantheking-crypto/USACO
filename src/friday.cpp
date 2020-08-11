/*
 ID: danielf12
 TASK: friday
 LANG: C++
 */
#include <iostream>
#include <fstream>
using namespace std;
int main () {
	ifstream fin("friday.in");
	ofstream fout("friday.out");
	int a[7] = {0, 0, 0, 0, 0, 0, 0};
	int currentday = 0;
	int currentmonth = 1;
	int currentyear = 1900;
	int date = 1;
	int years;
	fin >> years;
  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while (currentyear < 1900 + years) {
		int daysinmonth;
		if (currentmonth == 2) {
			if ((currentyear % 4 == 0 && currentyear % 100 != 0) || currentyear % 400 == 0) {
				daysinmonth = 29;
			}
			else daysinmonth = 28;
		}
    else daysinmonth = days[currentmonth - 1];
		if (date == 13) {
      a[currentday]++;
    }
		date++;
		currentday++;
		if (currentday > 6) currentday = 0;
    if (date > daysinmonth) {
			date = 1;
			currentmonth++;
			if (currentmonth > 12) {
				currentyear++;
				currentmonth = 1;
			}
		}
	}
	for (int i = 5; i < 12; i++) {
		fout << a[i % 7] << " ";
	}
	return 0;
}





