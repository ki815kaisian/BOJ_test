#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int N = 0;
	
	cin >> N;

	std::list<std::size_t> inputValue;

	while (N > 0) {
		inputValue.push_back(N%10);
		N = N / 10;
	}

	inputValue.sort();
	inputValue.reverse();

	while (!inputValue.empty()) {
		cout << inputValue.front();
		inputValue.pop_front();
	}
	cout << endl;
	return 0;
}