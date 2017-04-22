#include <iostream>

using namespace std;

int transNum(int);

int main(void)
{
	int numA = 0;
	int numB = 0;
	cin >> numA;
	cin >> numB;

	numA = transNum(numA);
	numB = transNum(numB);

	(numA > numB) ? cout << numA << endl : cout << numB << endl;

	return 0;

}

int transNum(int num)
{
	int digitFirst = num / 100;
	int digitSecond = num % 100 / 10;
	int digitThird = num % 10;

	return digitThird * 100 + digitSecond * 10 + digitFirst;
}