#pragma once

#include <sstream>
#include <string>
#include "array_reverse.h"

void WordsInStringReverse(std::string& newString)
{
    const size_t limitOfWords = 100;
    std::string words[limitOfWords];
    size_t word_count = 0;

    std::istringstream stream(newString); // считывает данные из newString
    while (stream >> words[word_count] && word_count < limitOfWords)
    {
        ++word_count;
    }

    // Реверсируем порядок слов
    StringArrReverse(words, word_count);

    newString.clear();// Очистка перед использованием
    for (size_t i = 0; i < word_count; ++i)
    {
        if (i > 0)
        {
            newString += " ";
        }
        newString += words[i];
    }
}
