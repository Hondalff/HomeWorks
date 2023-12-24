#pragma once
#include <iostream>

#ifdef TEXT_EXPORTS
#define TEXT_API __declspec(dllexport)
#else
#define TEXT_API __declspec(dllimport)

#endif // TEXT_EXPORTS



namespace Text
{
	class Leaver
	{
	public:
		TEXT_API void leave(std::string str);
	};

}