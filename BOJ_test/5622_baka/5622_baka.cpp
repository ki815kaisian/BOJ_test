#include <iostream>

using namespace std;

int main(void)
{
	int charMapping[26] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9 }; 
	char intputString[15] = { ' ', };

	cin >> intputString;

	int sum = 0;
	for (int i = 0; ('A' <= intputString[i] && intputString[i] <= 'Z'); i++){
		sum += charMapping[intputString[i]-'A']+1;
	}
	cout << sum << endl;

	return 0;

}