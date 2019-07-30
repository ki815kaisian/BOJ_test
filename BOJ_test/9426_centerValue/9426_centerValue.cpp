#include <iostream>
#include <list>
/*논리적인 문제는 없어보이지만 오답처리 됨*/
/*질문을 작성했음*/
/*중앙값의 값의 합이 int의 범위를 넘을 수 있음*/
/*시간초과로 바뀜*/
using namespace std;

int findCenterValue(int* input, int size);

int main(void)
{
	int N = 0;
	int K = 0;
	int input[250000];
	long long sum = 0;
	int centerValue = 0;

	cin >> N;
	cin >> K;

	for (int i = 0; i < N; i++) {
		cin >> input[i];
		if (i + 1 >= K) {
			centerValue = findCenterValue(&input[i + 1 - K], K);
			sum += centerValue;
		}
	}
	cout << sum << endl;

}

int findCenterValue(int* input, int size)
{
	int temp = 0;
	std::list<std::size_t> inputValue;
	for (int i = 0; i < size; i++) {
		inputValue.push_back(input[i]);
	}
	inputValue.sort();
	
	for (int i = 0; i < (size + 1) / 2; i++) {
		temp = inputValue.front();
		inputValue.pop_front();
	}
	return temp;
}