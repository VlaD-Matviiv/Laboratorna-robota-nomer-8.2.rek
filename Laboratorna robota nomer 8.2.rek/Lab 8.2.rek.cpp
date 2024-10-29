// Lab 8.2
// �������

#include <iostream>
#include <string>
#include <sstream>
#include <Windows.h>
using namespace std;

size_t CountWordsStartingWithB(const string& input, size_t index = 0, size_t count = 0) 
{
    if (index >= input.length()) 
    {
        return count;
    }

    while (index < input.length() && input[index] == ' ') 
    {
        index++;
    }

    if (index >= input.length()) 
    {
        return count;
    }

    size_t wordEnd = index;
    while (wordEnd < input.length() && input[wordEnd] != ' ') 
    {
        wordEnd++;
    }

    if (input[index] == 'b') 
    {
        count++;
    }

    return CountWordsStartingWithB(input, wordEnd, count);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string input;

    cout << "������ �����:" << endl;
    getline(cin, input); 

    size_t count = CountWordsStartingWithB(input); 

    cout << "ʳ������ ���, �� ����������� �� 'b': " << count << endl; 
    return 0;
}

