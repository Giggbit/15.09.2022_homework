#include <iostream>
#include "Data.h"
using namespace std;

int d_day = 0;
int m_month = 0;
int y_year = 0;

Data& operator--(Data& obj, int t) {
	Data temp(obj);
	obj.SetDay(obj.GetDay() - 1);  
	return temp;
}

Data& operator++(Data& obj, int t) {
	Data temp(obj);
	obj.SetDay(obj.GetDay() + 1);
	return temp;
}

Data operator+(Data& obj, int num) {
	cout << "Enter amount: ";
	cin >> num;

	Data temp(obj);
	obj.SetDay(obj.GetDay() + num);

	if (obj.GetDay() > 31) {
		obj.SetMonth(obj.GetMonth() + 1);
		obj.SetDay(obj.GetDay() - 31) ;
	}
	return temp;
}

Data operator-(Data& obj, int num) {
	cout << "Enter amount: ";
	cin >> num;

	Data temp(obj);
	obj.SetDay(obj.GetDay() - num);

	if (obj.GetDay() < 0) {
		obj.SetMonth(obj.GetMonth() - 1);
		obj.SetDay(obj.GetDay() + 31);
	}
	return temp;
} 

Data operator-(Data& obj) {
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp(obj);
	obj.SetDay(obj.GetDay() - d_day);
	obj.SetMonth(obj.GetMonth() - m_month);
	obj.SetYear(obj.GetYear() - y_year);

	return temp;
}

Data operator+=(Data& obj, int num) {
	cout << "Enter amount: ";
	cin >> num;

	Data temp(obj);
	obj.SetDay(obj.GetDay() += num);
	obj.SetMonth(obj.GetMonth() += num);
	obj.SetYear(obj.GetYear() += num);

	if (obj.GetDay() > 31) {
		obj.SetMonth(obj.GetMonth() + 1);
		obj.SetDay(obj.GetDay() - 31);
	}

	if (obj.GetMonth() > 12) {
		obj.SetYear(obj.GetYear() + 1);
		obj.SetMonth(obj.GetMonth() - 12);
	}

	return temp;
}

Data operator-=(Data& obj, int num) {
	cout << "Enter amount: ";
	cin >> num;

	Data temp(obj);
	obj.SetDay(obj.GetDay() -= num);
	obj.SetMonth(obj.GetMonth() -= num);
	obj.SetYear(obj.GetYear() -= num);

	if (obj.GetDay() < 0) {
		obj.SetMonth(obj.GetMonth() - 1);
		obj.SetDay(obj.GetDay() + 31);
	}

	if (obj.GetMonth() < 0) {
		obj.SetYear(obj.GetYear() - 1);
		obj.SetMonth(obj.GetMonth() + 12);
	}

	return temp;
}

Data operator<(Data& obj, bool b) {
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp(obj);

	if (obj.GetYear() < y_year) {
		cout << " < " << endl;
	}
	else if (obj.GetYear() == y_year && obj.GetMonth() < m_month) {
		cout << " < " << endl;
	}
	else if (obj.GetYear() == y_year && obj.GetMonth() == m_month && obj.GetDay() < d_day) {
		cout << " < " << endl;
	}
	else {
		cout << " > " << endl;
	}
	return temp;
}

Data operator>(Data& obj, bool b) {
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp(obj);

	if (obj.GetYear() > y_year) {
		cout << " > " << endl;
	}
	else if (obj.GetYear() == y_year && obj.GetMonth() > m_month) {
		cout << " > " << endl;
	}
	else if (obj.GetYear() == y_year && obj.GetMonth() == m_month && obj.GetDay() > d_day) {
		cout << " > " << endl;
	}
	else {
		cout << " < " << endl;
	}
	return temp;
}

Data operator==(Data& obj, int num) {
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp(obj);

	if (obj.GetYear() == y_year && obj.GetMonth() == m_month && obj.GetDay() == d_day) {
		cout << " == " << endl;
	}
	else {
		cout << " != " << endl;
	}

	return temp;
}

Data operator!=(Data& obj, int num) {
	cout << "Enter new data: ";
	cin >> d_day >> m_month >> y_year;

	Data temp(obj);

	if (obj.GetYear() != y_year || obj.GetMonth() != m_month || obj.GetDay() != d_day) {
		cout << " != " << endl;
	}
	return temp;
}


int main() {
	Data str(0, 0, 0);
	str.Input();
	str.Print();

	/*str--;
	str.Print();*/

	/*str++;
	str.Print();*/

	/*str + 0;
	str.Print();*/

	/*str - 0;
	str.Print();*/

	/*operator-(str).GetDay();
	str.Print();*/

	/*str += 0;
	str.Print();*/

	/*str -= 0;
	str.Print();*/

	/*str < 0;*/

	/*str > 0;*/

	/*str == 0;*/

	/*str != 0;*/
}

