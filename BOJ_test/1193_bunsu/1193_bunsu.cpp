#include <iostream>

using namespace std;

int main(void)
{
	int input = 0;
	cin >> input;

	int cnt = 0;
	for (int i = 1; i*(i + 1) / 2 < input; i++)cnt = i;
	int temp = input - cnt*(cnt + 1) / 2;
	int row = 0;
	int col = 0;
	if (cnt % 2 == 0){
		col = temp;
		row = cnt - temp + 2;
	}
	else{
		row = temp;
		col = cnt - temp + 2;
	}
	cout << row << '/' << col << endl;
	return 0;
}