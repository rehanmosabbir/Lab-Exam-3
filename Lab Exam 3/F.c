#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main()
{
    long long int num;
    int count = 0;
    scanf("%lld", &num);


    while(num)
    {
        int rem = num % 10;
        if(rem == 7 || rem == 4)
        {
            count++;
        }
        num = num / 10;
    }

    if(count == 4 || count == 7)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}


