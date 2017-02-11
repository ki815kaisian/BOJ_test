#include <iostream>

using namespace std;

int main(void)
{

	int count = 0;
	cin >> count;

	for (int i = 0; i < count; i++){
		char temp[20] = { ' ', };
		int repeat = 0;
		cin >> repeat;
		cin >> temp;
		for (int j = 0; j < 20; j++){
			if (temp[j] < ' ')break;
			else {
				for (int k = 0; k < repeat; k++)cout << temp[j];
			}
		}
		cout << endl;
	}
	return 0;
}