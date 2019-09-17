#include <iostream>

using namespace std;

int main(void)
{
	int card[100] = { 0 };
	int N, M;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		for (int j = 0; j <= i; j++) {
			if (input > card[j]) {
				int temp = card[j];
				card[j] = input;
				input = temp;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				int temp = card[i] + card[j] + card[k];
				if (temp <= M && temp > max)max = temp;
			}
		}
	}
	cout << max << endl;

	return 0;
}