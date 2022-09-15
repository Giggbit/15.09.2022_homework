#pragma once
class Data {
	int day;
	int month;
	int year;

public:
	Data();
	Data(int d, int m, int y);


	void SetDay(int a);
	int& GetDay();

	void SetMonth(int m);
	int& GetMonth();

	void SetYear(int y);
	int& GetYear();                     

	void Input();
	void Print();

};

