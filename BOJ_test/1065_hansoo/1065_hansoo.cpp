#include <iostream>

using namespace std;

int main(void)
{
	int A = 0;
	cin >> A;
	int cnt = 0;
	
	if (A < 100)cnt = A;
	else cnt = 99;

	for (int i = 100; i <= A; i++){
		if (((i / 100) - ((i % 100) / 10)) == ((i % 100) / 10) - (i % 10))cnt++;
	}
	cout << cnt << endl;

	return 0;

}