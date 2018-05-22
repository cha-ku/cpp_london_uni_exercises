#include <iostream>

// Fizz Buzz Problem

void fizzbuzz(int i)
{
	if ((i % 3 == 0) && (i % 5 != 0))	
	{
		std::cout << "fizz\n";
	}
	else if ((i % 5 == 0) && (i % 3 != 0))
	{
		std::cout << "buzz\n";
	}
	else if ((i % 3 == 0) && (i % 5 == 0))
	{
		std::cout << "fizzbuzz\n";
	}
	else
	{
		std::cout << "not fizzy or buzzy\n";
	}
}

int main()
{
	for(int k=1 ; k<=100 ; k++)
	{
		std::cout << k << ": ";
		fizzbuzz(k);
	}
	
	return 0;
}
