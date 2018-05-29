#include <iostream>
#include <string>
#include <cassert>

void swap(std::string& s1, std::string& s2);

void swap(std::string& s1, std::string& s2)
{
	std::string tmp;
	tmp = s1;
	s1 = s2;
	s2 = tmp;
}

int main()
{
	std::string str1 = "I Love";
	std::string str2 = "Manali";

	swap(str1,str2);

//	std::cout << "str1 : " << str1 << "\n";
//	std::cout << "str2 : " << str2 << "\n";
	assert(str1 == "Manali" && str2=="I Love");
}
