#include <stdio.h>
#include <string.h>
int main()
{
    int num, i, j;
    scanf("%d", &num);
    char text[num][1000];
    char tmp[1000];
    for (i = 0; i < num; i++)
    {
        scanf("%s", text[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (strcmp(text[i], text[j]) > 0)
            {
                strcpy(tmp,text[i]);
                strcpy(text[i],text[j]);
                strcpy(text[j],tmp);
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%s\n",text[i]);
    }
}