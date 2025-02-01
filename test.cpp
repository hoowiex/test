#include <iostream>
#include "string_reverse.h"
#include "wordsInString_reverse.h"

// Main функция
int main()
{
	std::string firstString;

	std::cout << "Input something to first string: ";
	getline(std::cin, firstString);

	ReverseString(firstString);
	std::cout << "Reversed string: " << firstString << std::endl;

	std::string secondString;

	std::cout << "Input something to second string: ";
	getline(std::cin, secondString);

	WordsInStringReverse(secondString);
	std::cout << "Reversed words in second string: " << secondString << std::endl;
}
