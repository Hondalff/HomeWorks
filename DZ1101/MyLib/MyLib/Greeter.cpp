#include "Greeter.h"

namespace MyLib
{
	void Greeter::print_text(std::string str)
	{
		std::cout << "Здравствуйте, " << str << "!" << std::endl;
	}
}