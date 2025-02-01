#pragma once

#include <cstring>
#include <string>

// ������ ������� ��������
void CharArrReverse(char* array, size_t length)
{
    for (size_t i = 0; i < length / 2; ++i)
    {
        std::swap(array[i], array[length - i - 1]);
    }
}

// ������ ������
void StringReverse(std::string& newString)
{
    for (size_t i = 0; i < newString.size() / 2; ++i)
    {
        std::swap(newString[i], newString[newString.size() - i - 1]);
    }
}

// ������ ������� ����� �����
void IntArrReverse(int* array, size_t length)
{
    for (size_t i = 0; i < length / 2; ++i)
    {
        std::swap(array[i], array[length - i - 1]);
    }
}

// ������ ������� �����
void StringArrReverse(std::string* arr, size_t length)
{
    for (size_t i = 0; i < length / 2; ++i)
    {
        std::swap(arr[i], arr[length - i - 1]);
    }
}

