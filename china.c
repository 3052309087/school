#include <stdio.h>
int main()
{
    char str [5] = "China";
    for (int i = 0; i < 5; i++)
    {
        str[i] = str[i] + 4;
    }
    printf("%s\n", str);
    for (int i = 0; i < 5; i++)
    {
        putchar(str[i]);
    }
    
    
    getchar();
    return 0;
}