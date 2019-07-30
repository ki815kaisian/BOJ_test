#include <iostream>
#include <list>
/*������ ������ ��������� ����ó�� ��*/
/*������ �ۼ�����*/
/*�߾Ӱ��� ���� ���� int�� ������ ���� �� ����*/
/*�ð��ʰ��� �ٲ�*/
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