#include <iostream>

using namespace std;

int main(void)
{
	int weight[51] = { 0 };
	int height[51] = { 0 };
	int build[51] = { 0 };
	int N;

	cin >> N;
	for (int i = 1; i <= N; i++)cin >> weight[i] >> height[i];

	for (int i = 1; i <= N; i++) {
		int rank = 1;
		for (int j = 1; j <= N; j++) {
			if (weight[i] < weight[j] && height[i] < height[j])rank++;
		}
		build[i] = rank;
	}
	for (int i = 1; i <= N; i++) {
		if (i > 1)cout << " ";
		cout << build[i];
	}
	cout << endl;
	return 0;
}