#include<stdio.h>
int main()
{
    int student,i,j,k,min=0,max=0,No1,No2;
    scanf("%d",&student);
    int people_vote_x[student];
    int people_vote_y[student];
    int check[student];
    for(i=0;i<student;i++)
    {
        scanf("%d %d", &people_vote_x[i], &people_vote_y[i]);  
    }
    for(i=1;i<=student;i++)
    {
        check[i-1] = 0;
        for(j=0;j<student;j++)
        {
            if(i==people_vote_x[j])
            {
                check[i-1]++;
            }
            else if(i==people_vote_y[j])
            {
                check[i-1]++;
            }
        }
    }
    min = check[0];
    for(k = 0; k<student; k++)
    {
        if(check[k] > max)
        {
            max = check[k];
            No1 = k+1;
        }
        if(check[k] < min)
        {
            min = check[k];
            No2 = k+1;
        }
    }
    printf("%d %d",No1,No2);
}