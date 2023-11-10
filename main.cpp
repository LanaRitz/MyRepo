#include <iostream>

using namespace std;

int String_to_number(const string& str)
{
    int result = 0;
    bool isNegative = false;
    int i = 0;

   

    // Проход по каждому символу строки и конвертация в число
    for (; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        } else
        {
            // Если встречен нецифровой символ, то возвращаем 0
            return 0;
        }
    }

    // Возвращаем число с учетом знака
    return (isNegative ? -result : result);
}

int main()
{
    string line = "81234";

    int number = String_to_number(line);
    cout << number << endl;

    return 0;
}
