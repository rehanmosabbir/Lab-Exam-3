#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    printf("%c", toupper(str[0]));

    for(int i = 1; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}


