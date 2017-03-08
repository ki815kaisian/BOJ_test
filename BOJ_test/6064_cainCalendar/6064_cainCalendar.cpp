#include <iostream>

using namespace std;

int main(void)
{
	int caseCnt = 0;

	cin >> caseCnt;

	for (int i = 0; i < caseCnt; i++){
		int M = 0;
		int N = 0;
		int x = 0;
		int y = 0;
		cin >> M;
		cin >> N;
		cin >> x;
		cin >> y;

		int date = -1;
		for (; x < M*N && y < M*N;){
			if (x < y){
				x += M;
			}
			else if (x > y){
				y += N;
			}
			else {
				date = x;
				break;
			}
		}
		cout << date << endl;
	}
	return 0;
}