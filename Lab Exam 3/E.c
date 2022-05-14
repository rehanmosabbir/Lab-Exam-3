#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[101];
    int freq[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    bool is_contain_all_alphabet = true;

    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }
    for(int i = 0; i < n; i++)
    {
        str[i] = tolower(str[i]);
        int pos = str[i] - 96;
        freq[pos]++;
    }

    for(int i = 1; i < 27; i++)
    {
        if(freq[i] != 0)
        {
            is_contain_all_alphabet = true;
        } else
        {
            is_contain_all_alphabet = false;
            break;
        }
    }

    if(is_contain_all_alphabet)
    {
        printf("YES\n");
    } else
    {
        printf("NO\n");
    }
    return 0;
}


