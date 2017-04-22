#include <iostream>

using namespace std;

int main(void)
{
	char tmp[2] = { ' ', ' ' };

	int cnt = 0;
	tmp[1] = getchar();
	while (('A' <= tmp[1] && tmp[1] <= 'Z') || ('a' <= tmp[1] && tmp[1] <= 'z') || tmp[1] == ' '){
		if (tmp[0] == ' ' && tmp[1] != ' ')cnt++;
		tmp[0] = tmp[1];
		tmp[1] = getchar();
	}
	cout << cnt << endl;

	return 0;

}