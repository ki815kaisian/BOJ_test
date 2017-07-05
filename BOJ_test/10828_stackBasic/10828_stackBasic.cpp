#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	int count = 0;
	cin >> count;

	std::stack<std::size_t> inputStack;

	for (int i = 0; i < count; i++) {
		string stringInput = "";
		int numTemp; 
		cin >> stringInput;

		if (stringInput.compare("push") == 0) {
			cin >> numTemp;
			inputStack.push(numTemp);
		}
		else if (stringInput.compare("pop") == 0) {
			if (inputStack.empty()) {
				numTemp = -1;
			}
			else {
				numTemp = inputStack.top();
				inputStack.pop();
			}
			cout << numTemp << endl;
		}
		else if (stringInput.compare("size") == 0) {
			numTemp = inputStack.size();
			cout << numTemp << endl;
		}
		else if (stringInput.compare("empty") == 0) {
			if (inputStack.empty()) {
				numTemp = 1;
			}
			else {
				numTemp = 0;
			}
			cout << numTemp << endl;
		}
		else if (stringInput.compare("top") == 0) {
			if (inputStack.empty()) {
				numTemp = -1;
			}
			else {
				numTemp = inputStack.top();
			}
			cout << numTemp << endl;
		}
	}
	return 0;
}