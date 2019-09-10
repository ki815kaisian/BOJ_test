#include <iostream>

using namespace std;

int main(void)
{
	int A, B, V;
	cin >> A >> B >> V;

	int gap = A - B;
	int day = (V - A) / gap + 1;
	int pos = A + gap*(day - 1);

	while (pos < V) {
		pos += gap;
		day++;
	}

	cout << day << endl;

	return 0;
}