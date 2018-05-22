#include <iostream>
#include <string>

std::string say_hello(std::string name)
{
	name = "Hello " + name;
	return name;
}

int main()
{
	std::string me = "Chaitanya";
	std::cout << say_hello(me) << std::endl;
	std::cout << me << std::endl;
	return 0;
}
