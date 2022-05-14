#include<stdio.h>


int main()
{
    int n,count = 0;
    scanf("%d", &n);
    char str[51];

    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }
    for(int i = 0, j = 1; i < n; i++, j++)
    {
        if(str[i] == str[j])
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}


