#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int inputSize = 0;
	cin >> inputSize;

	int pos = 0;
	int neg = 0;
	std::list<std::size_t> inputPos;
	std::list<std::size_t> inputNeg;
	for (int i = 0; i < inputSize; i++){
		int temp;
		cin >> temp;
		if (temp>=0){
			inputPos.push_back(temp);
			pos++;
		}
		else {
			inputNeg.push_back(temp);
			neg++;
		}
	}
	inputPos.sort();
	inputNeg.sort();

	for (int i = 0; i < neg; i++){
		int temp = inputNeg.front();
		inputNeg.pop_front();
		cout << temp << endl;
	}
	for (int i = 0; i < pos; i++){
		int temp = inputPos.front();
		inputPos.pop_front();
		cout << temp << endl;
	}

	return 0;
}