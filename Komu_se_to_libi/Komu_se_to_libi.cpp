#include <iostream>
#include <string>
#include <vector>

std::string likes(const std::vector<std::string>& names)
{
	std::string whoLikesIt;
	if (names.empty())
		whoLikesIt = "no one likes this";
	else if (names.size() == 1)
		whoLikesIt = names[0] + " likes this";
	else if (names.size() == 2)
		whoLikesIt = names[0] + " and " + names[1] + " like this";
	else if (names.size() == 3)
		whoLikesIt = names[0] + ", " + names[1] + " and " + names[2] + " like this";
	else
	{
		for (unsigned long i = 1; i < names.size(); i++)
		{
			whoLikesIt = names[0] + ", " + names[1] + " and " + std::to_string(i - 1) + " others like this";
		}
	}
	return  whoLikesIt;
}



