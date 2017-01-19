#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int i = 0;
	while (i++ < 100){
		string input = "";
		getline(cin, input);
		if (input == "")return 0;
		else if (input.length() >100)return 0;
		cout << input << endl;
	}

	return 0;

}