#include <iostream>
#include <vector>

long long sum(std::vector<int> &a) {
	long long ans = 0;
	while (a.size() ) {
		ans += a.back();
		a.pop_back();
	}
	return ans;
}

int main(void)
{
	std::vector<int> numbers;
	for (int i = 1; i <= 10; i++)numbers.push_back(i);
	
	std::cout<< sum(numbers) << std::endl;
	return 0;
}

