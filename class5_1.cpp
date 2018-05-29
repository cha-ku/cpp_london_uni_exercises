#include <iostream>

void increment(int& i)
{
	i++;
}

int main()
{
	int n = 42;
	increment(n);
	std::cout << n << '\n';
	//std::cout << increment(n) << '\n';
	return 0;
}
