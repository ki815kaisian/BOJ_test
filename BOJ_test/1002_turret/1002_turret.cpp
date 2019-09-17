#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int input;
	int x1, y1, r1;
	int x2, y2, r2;

	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int bR, sR;
		if (r1 > r2) {
			bR = r1;
			sR = r2;
		}
		else {
			sR = r1;
			bR = r2;
		}

		double dist = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
		if (dist > sR + bR)cout << "0" << endl;
		else if (dist == sR + bR)cout << "1" << endl;
		else {
			if (dist == 0 && sR == bR)cout << "-1" << endl;
			else if (dist + sR > bR)cout << "2" << endl;
			else if (dist + sR == bR)cout << "1" << endl;
			else cout << "0" << endl;
		}
	}

	return 0;
}