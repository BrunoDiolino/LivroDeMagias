#include <stddef.h>

int getCount(const char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];

        if (c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u')
        {
            count++;
        }
    }

    return count;
}