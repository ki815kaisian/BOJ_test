#include <iostream>

using namespace std;

void PrintStar(int i, int j, int size) {
	if ((i / size) % 3 == 1 && (j / size) % 3 == 1)cout << " ";
	else {
		if (size<3)cout << "*";
		else PrintStar(i, j, size/3);
	}
}

int main(void)
{
	int input;
	cin >> input;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			PrintStar(i, j, input);
		}
		cout << endl;
	}

	return 0;
}