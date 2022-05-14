#include<stdio.h>


int main()
{
    int n;
    int num[100];
    int max = 0;
    int count = 0;
    scanf("%d", &n);
    for(int i = 0; i< n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i< n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    for(int i = 0; i< n; i++)
    {
        count += (max - num[i]);
    }
    printf("%d\n", count);
    return 0;
}


