#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string input = "";
	int cnt = 0;

	getline(cin, input);

	for (int i = 0; input[i] != '\0'; cnt++){
		if (input[i] == 'c'){
			if (input[i + 1] == '=' || input[i + 1] == '-')i += 2;
			else i += 1;
		}
		else if (input[i] == 'd'){
			if (input[i + 1] == 'z'&&input[i+2]=='=')i += 3;
			else if (input[i + 1] == '-')i += 2;
			else i += 1;
		}
		else if (input[i] == 'l'||input[i] == 'n'){
			if (input[i + 1] == 'j')i += 2;
			else i += 1;
		}
		else if (input[i] == 's' || input[i] == 'z'){
			if (input[i + 1] == '=')i += 2;
			else i += 1;
		}
		else i += 1;
	}
	cout << cnt << endl;

	return 0;
}