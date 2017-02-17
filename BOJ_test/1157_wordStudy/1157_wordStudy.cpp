#include <iostream>

using namespace std;

int main(void)
{
	char temp;
	int count[26] = { 0, };

	temp = getchar();
	while (('A' <= temp && temp <= 'Z') || ('a' <= temp && temp <= 'z')){
		if (temp <= 'Z'){
			count[(int)(temp - 'A')]++;
		}
		else{
			count[(int)(temp - 'a')]++;
		}
		temp = getchar();
	}
	int max = 0;
	for (int i = 0; i < 26; i++){
		if (count[i] >= max){
			max = count[i];
		}
	}
	int cnt = 0;
	int maxIndex = -1;
	for (int i = 0; i < 26; i++){
		
		if (count[i] >= max){
			maxIndex = i;
			cnt++;
		}
	}
	if (cnt>1)cout << '?' << endl;
	else {
		char maxChar = 'A' + maxIndex;
		cout << maxChar << endl;
	}

	return 0;
}