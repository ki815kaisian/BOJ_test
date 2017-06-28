#include <iostream>
#include <list>
#include <string>

using namespace std;
//시간 초과
int main(void)
{
	int count = 0;

	cin >> count;
	std::list<std::string> inputList;
	std::list<std::string>::iterator itr;
	for (int i = 0; i < count; i++) {
		string input = "";
		cin >> input;
		//if (!(inputList.empty())) {
		//	itr = inputList.begin();
		//	int itCnt = 0;
		//	string temp = *itr;
		//	while (input.length() > temp.length()) {
		//		itCnt++;
		//		if (itCnt >= inputList.size())break;
		//		itr++;
		//		temp = *itr;
		//	}
		//	if (input.length() == temp.length()) {
		//		while (input > temp) {
		//			itCnt++;
		//			if (itCnt >= inputList.size())break;
		//			itr++;
		//			temp = *itr;
		//		}
		//		if (input == temp)continue;
		//	}
		//	if (itCnt == inputList.size())inputList.push_back(input);
		//	else inputList.insert(itr, input);
		//}
		//else {
		//	inputList.push_front(input);
		//}

		inputList.push_back(input);
	}
	inputList.sort();
	inputList.reverse();

	std::list<std::string> sortList;
	sortList.push_back(inputList.front());
	inputList.pop_front();
	for (int i = 1; i < count; i++) {
		itr = sortList.begin();
		int itCnt = 0;
		string temp = *itr;
		while (inputList.front().length() > temp.length()) {
			itCnt++;
			if (itCnt >= sortList.size())break;
			itr++;
			temp = *itr;
		}
		if (inputList.front() == temp) {
			inputList.pop_front();
			continue;
		}
		if (itCnt == sortList.size())sortList.push_back(inputList.front());
		else sortList.insert(itr, inputList.front());
		inputList.pop_front();
	}


	for(itr= sortList.begin(); itr != sortList.end(); ++itr)
		std::cout << *itr << endl;

	return 0;
}
