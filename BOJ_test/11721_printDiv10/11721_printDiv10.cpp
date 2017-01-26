#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string input;
	getline(cin, input);

	int stringLength = input.length();
	int i = 0;

	for (i = 0; i < stringLength / 10; i++){
		string temp = input.substr(i * 10, 10);
		cout << temp << endl;
	}
	if(stringLength%10 > 0)cout << input.substr(i * 10, stringLength % 10) << endl;

	return 0;

}