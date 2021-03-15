
#include <stdio.h>
int main()
{
    int major, i, correct=0;
    scanf("%d", &major);
    char number[2][major];
    for (i = 0; i < 2; i++)
    {
        scanf("%s", number[i]);
    }
        for (i = 0; i < major; i++)
        {
            if(number[0][i]==number[1][i])
            {
                correct++;
            }
        }
        printf("%d %d",correct,major-correct);
}