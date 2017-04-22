#include <iostream>

using namespace std;

int main(void)
{
	int point[5];
	int temp = 0;
	int sum = 0;

	for (int i = 0; i < 5; i++){
		cin >> temp;
		if (temp < 40)point[i] = 40;
		else point[i] = temp;
		sum += point[i];

	}
	cout << sum / 5 << endl;
	
	return 0;
}