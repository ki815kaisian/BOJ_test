#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	unsigned int monthLength[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char dayOfTheWeek[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	unsigned int month = 0;
	unsigned int day = 0;
	
	cin >> month;
	cin >> day;

	if (month > 12)return 0;
	if (day > 31)return 0;
	
	unsigned int yearDay = 0;
	for (int i = 1; i < month; i++)yearDay += monthLength[i-1];
	yearDay += day;
	
	cout << dayOfTheWeek[yearDay%7] << endl;

	return 0;

}