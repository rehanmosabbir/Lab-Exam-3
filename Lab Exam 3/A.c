#include<stdio.h>
#include<string.h>

int main()
{
    char name[101];
    scanf("%s", name);
    int freq[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int count = 0;
    for(int i = 0; i < strlen(name); i++)
    {
        int pos = name[i] - 96;
        freq[pos]++;
    }
    for(int j = 1; j < 27; j++)
    {
        if(freq[j] >= 1)
        {
            count++;
        }
    }


    if(count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    } else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}


