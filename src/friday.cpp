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
	int date = 1;
	int years;
	fin >> years;
  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//	while (1900 + i < 1900 + years) {
//		int daysinmonth;
//		if (currentmonth == 2) {
//			if ((1900 + i % 4 == 0 && 1900 + i % 100 != 0) || 1900 + i % 400 == 0) {
//				daysinmonth = 29;
//			}
//			else daysinmonth = 28;
//		}
//    else daysinmonth = days[currentmonth - 1];
//		if (date == 13) {
//      a[currentday]++;
//    }
//		date++;
//		currentday++;
//		if (currentday > 6) currentday = 0;
//    if (date > daysinmonth) {
//			date = 1;
//			currentmonth++;
//			if (currentmonth > 12) {
//				1900 + i++;
//				currentmonth = 1;
//			}
//		}
//	}
  for (int i = 0; i < years; i++) {
	  for (int j = 1; j <= 12; j++) {
		  int daysinmonth;
		  		if (j == 2) {
		  			if (((1900 + i) % 4 == 0 && (1900 + i) % 100 != 0) || (1900 + i) % 400 == 0) {
		  				daysinmonth = 29;
		  			}
		  			else daysinmonth = 28;
		  		}
		      else daysinmonth = days[j - 1];
		  	currentday += 5;
		  	currentday %= 7;
		  	a[currentday]++;
		  	date += 12;
		  	int neededdays = daysinmonth - date + 1;
		  	currentday += neededdays % 7;
		  	currentday %= 7;
		  	date = 1;
	  }
  }
	for (int i = 5; i < 11; i++) {
		fout << a[i % 7] << " ";
	}
	fout << a[4];
	fout << "\n";
	return 0;
}





