// Online C++ compiler to run C++ program online
#include <iostream>

std::string ordinalnum(int v)
{
	if (v == 11 || v == 12 || v == 13 || v == 14)
		return "th";

	if (v % 10 == 1)
		return "st";
	if (v % 10 == 2)
		return "nd";
	if (v % 10 == 3)
		return "rd";
	if (v % 10 == 4)
		return "th";

	return "th";
}
int main()
{
	// Write C++ code here
	std::cout << "printing table of 20 for 100 numbers" << std::endl;
	for (int c = 1; c <= 20; c++)
	{
		std::cout << "" << c << ordinalnum(c) << " " << c + 20 << ordinalnum(c + 20) << " " << c + 40 << ordinalnum(c + 40) << " " << c + 60 << ordinalnum(c + 60) << " " << c + 80 << ordinalnum(c + 80) << std::endl;
	}

	return 0;
}