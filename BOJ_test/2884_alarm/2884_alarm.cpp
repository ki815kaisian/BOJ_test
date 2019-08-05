#include <iostream>

using namespace std;

int main(void)
{
	int time;
	int minute;
	int alarm;

	cin >> time >> minute;
	alarm = 60 * time + minute - 45;
	if (alarm < 0)
		alarm = alarm + 1440;
	
	cout << alarm / 60 << " " << alarm % 60 << endl;

	return 0;
}