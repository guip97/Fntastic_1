#include <iostream>
#include <sstream>

int main()
{
	std::string InputString;
	std::getline(std::cin, InputString);

	int InputLength = InputString.length();

	for (int i = 0; i < InputLength; i++)
	{
		bool bUnique = true;
		char Symbol = InputString[i];

		for (int j = 0; j < InputLength; j++)
		{
			if (i != j && std::tolower(Symbol) == std::tolower(InputString[j]))
			{
				InputString[j] = ')';
				bUnique = false;
			}
		}

		InputString[i] = bUnique ? '(' : ')';
	}

	std::cout << InputString << "\n";
}
