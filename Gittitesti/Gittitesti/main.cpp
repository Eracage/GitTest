// this is the main file

#include <vector>
#include <string>

#include "vektori.h"
#include "test.h"

int main()
{
	int testnumber = 1;
	int testnumber2 = 2;
	testnumber += testnumber2;

	vektori a = vektori();
	vektori b = vektori(2,2);
	
	std::vector<std::string> strings;
	strings.push_back("asdf");
	strings.push_back("qwer");

	return 0;
}