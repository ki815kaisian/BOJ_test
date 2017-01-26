#include <iostream>

using namespace std;


int main(void)
{
	int selfNumber[10001] = { 0, };
	
	for (int i = 1; i <= 10000; i++){
		int temp = (int)(i + i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + i % 10);
		if(temp<=10000)selfNumber[temp] = 1;
	}
	for (int i = 1; i <= 10000; i++){
		if (selfNumber[i] == 0)cout << i << endl;
	}
	return 0;
}