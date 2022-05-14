#include<stdio.h>


int main()
{
    int t;
    char str[101];
    scanf("%d", &t);

    for(int i = 1; i <= t;i++)
    {
        scanf("%s", str);
        int len = strlen(str);
        printf("%c", str[0]);
        for(int i = 1; i < len-1; i+= 2)
        {
            printf("%c", str[i]);
        }
        printf("%c\n", str[len - 1]);
    }
    return 0;
}


