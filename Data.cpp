#include "Data.h"
#include <iostream>
using namespace std;

Data::Data() {
	day = 0;
	month = 0;
	year = 0;
}

Data::Data(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}


void Data::SetDay(int a) {
	day = a;
}
int& Data::GetDay() {
	return day;
}

void Data::SetMonth(int m) {
	month = m;
}
int& Data::GetMonth() {
	return month;
}

void Data::SetYear(int y) {
	year = y;
}
int& Data::GetYear() {
	return year;  
}


void Data::Input() {
	cout << "Enter date: ";
	cin >> day >> month >> year;
}

void Data::Print() {
	cout << day << "." << month << "." << year << endl;
}