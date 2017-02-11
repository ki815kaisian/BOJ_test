#include <iostream>

using namespace std;

int main(void)
{
	char temp[100] = { ' ', };
	int alphabet[26];

	cin >> temp;
	for (int i = 0; i < 26; i++)alphabet[i] = -1;;

	for (int i = 0; i < 100; i++){
		if (temp[i] < 'a')break;
		else if (temp[i] > 'z')break;
		else {
			if (alphabet[temp[i] - 'a'] == -1){
				alphabet[temp[i] - 'a'] = i;
			}
		}
	}
	for (int i = 0; i < 25; i++){
		cout << alphabet[i] << ' ';
	}
	cout << alphabet[25] << endl;
	return 0;
}