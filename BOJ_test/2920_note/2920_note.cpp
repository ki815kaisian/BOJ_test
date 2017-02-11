#include <iostream>

using namespace std;

#define Init 0
#define Ascending 1
#define Descending 2
#define Mixed 3

int main(void)
{
	int note = 0;
	int state = Init;
	for (int i = 1; i <= 8; i++){
		int j = 8 - i + 1;
		cin >> note;
		switch (state){
		case Init:			if (note == i)state = Ascending;
							else if (note == j)state = Descending;
							else state = Mixed;
							break;
		case Ascending :		if (note == i)state = Ascending;
							else state = Mixed;
							break;
		case Descending :	if (note == j)state = Descending;
							else state = Mixed;
							break;
		default:			break;
		}
	}
	switch (state){
	case Ascending: cout << "ascending" << endl; break;
	case Descending: cout << "descending" << endl; break;
	default: cout << "mixed" << endl; break;
	}
}