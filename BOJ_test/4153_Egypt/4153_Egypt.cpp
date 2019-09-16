#include <iostream>

using namespace std;

int main(void)
{
	int l1, l2, l3;

	while (1) {
		cin >> l1 >> l2 >> l3;

		if (l1 == 0 && l2 == 0 && l3 == 0)break;
		int answer = 0;
		if (l1 < l2) {
			if (l2 < l3) {
				if (l1*l1 + l2*l2 == l3*l3)answer = 1;
			}
			else {
				if (l1*l1 + l3*l3 == l2*l2)answer = 1;
			}
		}
		else {
			if (l1 < l3) {
				if (l1*l1 + l2*l2 == l3*l3)answer = 1;
			}
			else {
				if (l2*l2 + l3*l3 == l1*l1)answer = 1;
			}
		}
		if (answer == 1)cout << "right" << endl;
		else cout << "wrong" << endl;

	}

	return 0;
}