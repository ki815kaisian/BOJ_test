#include <iostream>

using namespace std;

bool isVPS(void);

int main(void)
{
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		if (isVPS())printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

bool isVPS(void)
{
	char temp;
	int cntVPS = 0;
	temp = getchar();
	while (temp != '(' && temp != ')')temp = getchar();
	while (temp == '(' || temp == ')')
	{
		if (temp == '(') {
			cntVPS++;
		}
		else {
			cntVPS--;
		}
		if (cntVPS < 0) {
			temp = getchar();
			while (temp == '(' || temp == ')')temp = getchar();
			break;
		}
		else temp = getchar();
	}
	if (cntVPS == 0)return true;
	else return false;
}