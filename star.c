#include<stdio.h>
int main()
{
    long long student,i,j,k=0;
    scanf("%d",&student);
    int people_vote[student][2];
    int check[student];
    for(i=0;i<student;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &people_vote[i][j]);
        }
    }
    check[0] = 1;
    for(i=0;i<student;i++)
    {
        check[i+1] = check[i] + 1; 
    }
    
}